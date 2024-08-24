package Esentza;

import com.acmerobotics.dashboard.FtcDashboard;
import com.acmerobotics.dashboard.config.Config;
import com.acmerobotics.roadrunner.trajectory.TrajectoryBuilder;
import com.qualcomm.robotcore.eventloop.opmode.Autonomous;
import com.qualcomm.robotcore.eventloop.opmode.LinearOpMode;

import org.firstinspires.ftc.robotcore.external.hardware.camera.WebcamName;
import org.firstinspires.ftc.teamcode.drive.DriveConstants;
import org.firstinspires.ftc.teamcode.drive.opmode.TuningController;

import org.opencv.core.Core;
import org.opencv.core.Mat;
import org.opencv.core.Point;
import org.opencv.core.Rect;
import org.opencv.core.Scalar;
import org.opencv.imgproc.Imgproc;
import org.openftc.easyopencv.OpenCvCamera;
import org.openftc.easyopencv.OpenCvCameraFactory;
import org.openftc.easyopencv.OpenCvCameraRotation;

import com.acmerobotics.roadrunner.geometry.Pose2d;
import com.acmerobotics.roadrunner.geometry.Vector2d;
import com.acmerobotics.roadrunner.trajectory.Trajectory;
import com.qualcomm.robotcore.hardware.DcMotor;
import com.qualcomm.robotcore.hardware.DcMotorSimple;

import org.firstinspires.ftc.teamcode.drive.SampleMecanumDrive;
import org.openftc.easyopencv.OpenCvPipeline;

@Config
@Autonomous(name="Red2ndPosition", group="yes")

public class Red2ndPosition extends LinearOpMode {

    public static OpenCvCamera camera;

    public void initCam() {
        int cameraMonitorViewId = hardwareMap.appContext.getResources().getIdentifier("cameraMonitorViewId", "id", hardwareMap.appContext.getPackageName());
        camera = OpenCvCameraFactory.getInstance().createWebcam(hardwareMap.get(WebcamName.class, "Webcam 1"), cameraMonitorViewId);
        pipeline = new CameraTest.RingDeterminationPipeline();
        camera.setPipeline(pipeline);

        camera.setViewportRenderingPolicy(OpenCvCamera.ViewportRenderingPolicy.OPTIMIZE_VIEW);

        camera.openCameraDeviceAsync(() ->
        {
            camera.startStreaming(800, 600, OpenCvCameraRotation.UPSIDE_DOWN);
            FtcDashboard.getInstance().startCameraStream(camera, 0);
        });
    }

    public static CameraTest.RingDeterminationPipeline pipeline;

    public static double POSITION_FOR_ANGLE = 0.41;

    public static double POSITION_FOR_POWERSHOTS = 0.417;

    public static double POSITION_UP_WOBBLE_ARM = 0.5;
    public static double POSITION_DOWN_WOBBLE_ARM = 0.95;

    public static double POSITION_CLOSED_FIRST_CLAW = 0;
    public static double POSITION_OPEN_FIRST_CLAW = 0.75;

    public static double POSITION_CLOSED_SECOND_CLAW = 0;
    public static double POSITION_OPEN_SECOND_CLAW = 0.6;


    public static double INITIAL_LENGTH = 10;
    public static double SERVO_SPEED = -0.2;
    public static double SERVO_SPEED_TOWER = 0.225;

    public static double INTAKE_POWER = 3000;

    public static double FLYWHEEL_POWER = 5400;
    public static double FLYWHEEL_POWER_ERROR = 4500;
    @Override
    public void runOpMode() {
        CameraStorage.x = 100;
        CameraStorage.y = 260;

        Output out = new Output(hardwareMap);
        Intake in = new Intake(hardwareMap);
        SampleMecanumDrive drive = new SampleMecanumDrive(hardwareMap);
        Turret turret = new Turret(hardwareMap);

        initCam();

        out.setPositionClaw(POSITION_CLOSED_FIRST_CLAW, POSITION_CLOSED_SECOND_CLAW);

        out.setUpPosition(POSITION_UP_WOBBLE_ARM);

        drive.setPoseEstimate(new Pose2d());

        Trajectory trajectory0forAllPaths = drive.trajectoryBuilder(new Pose2d())
                .splineToConstantHeading(new Vector2d(40, -23), Math.toRadians(0))
                .splineToConstantHeading(new Vector2d(60, 3), Math.toRadians(0))
                .addDisplacementMarker(INITIAL_LENGTH, ()->
                {
                    turret.setPositionForAngleServo(POSITION_FOR_ANGLE);
                    out.setVelocity(FLYWHEEL_POWER);
                })
                .addDisplacementMarker(()->out.setPusherSpeed(SERVO_SPEED))
                .build();

        Trajectory trajectory1forNoRings = drive.trajectoryBuilder(new Pose2d())
                .lineTo(new Vector2d(10, 15))
                .addDisplacementMarker(()->out.setUpPosition(POSITION_DOWN_WOBBLE_ARM))
                .build();

        Trajectory trajectory2forNoRings = drive.trajectoryBuilder(trajectory1forNoRings.end())
                .forward(5)
                .addDisplacementMarker(()->out.setPositionClaw(POSITION_CLOSED_FIRST_CLAW, POSITION_CLOSED_SECOND_CLAW))
                .build();

        Trajectory trajectory3forNoRings = drive.trajectoryBuilder(trajectory2forNoRings.end())
                .lineTo(new Vector2d(-5, -35))
                .build();


        Trajectory trajectory1forOneRing = drive.trajectoryBuilder(new Pose2d())
                .lineTo(new Vector2d(-15, -15))
                .addDisplacementMarker(()->out.setUpPosition(POSITION_DOWN_WOBBLE_ARM))
                .build();

        Trajectory trajectory2forOneRing = drive.trajectoryBuilder(trajectory1forOneRing.end())
                .addDisplacementMarker(()->in.setVelocity(INTAKE_POWER, DcMotorSimple.Direction.FORWARD))
                .lineTo(new Vector2d(30, 0))
                .addDisplacementMarker(5, ()->out.setPositionClaw(POSITION_CLOSED_FIRST_CLAW, POSITION_CLOSED_SECOND_CLAW))
                .build();

        Trajectory trajectory3forOneRing = drive.trajectoryBuilder(trajectory2forOneRing.end())
                .lineTo(new Vector2d(0, 0))
                .addDisplacementMarker(()->
                {
                    out.setUpPosition(POSITION_UP_WOBBLE_ARM);
                    drive.turn(Math.toRadians(-185));
                    out.setVelocity(FLYWHEEL_POWER);
                })
                .build();

        Trajectory trajectory4forOneRing = drive.trajectoryBuilder(new Pose2d())
                .lineTo(new Vector2d(5, -13))
                .build();


        Trajectory trajectory1forFourRings = drive.trajectoryBuilder(new Pose2d())
                .lineTo(new Vector2d(-45, 15))
                .addDisplacementMarker(()->out.setUpPosition(POSITION_DOWN_WOBBLE_ARM))
                .build();

        Trajectory trajectory2forFourRings = drive.trajectoryBuilder(trajectory1forFourRings.end())
                .lineTo(new Vector2d(-4, 6))
                .addDisplacementMarker(()->
                {
                    drive.turn(Math.toRadians(-185));
                })
                .build();

        Trajectory trajectory3forFourRings = drive.trajectoryBuilder(new Pose2d())
                .lineTo(new Vector2d(-55, 4))
                .addDisplacementMarker(()->
                {
                    in.setVelocity(INTAKE_POWER, DcMotorSimple.Direction.FORWARD);
                })
                .build();

        Trajectory trajectory4forFourRings = drive.trajectoryBuilder(trajectory3forFourRings.end())
                .strafeLeft(13)
                .addDisplacementMarker(()->out.setVelocity(FLYWHEEL_POWER))
                .build();

        Trajectory trajectory5forFourRings = drive.trajectoryBuilder(trajectory4forFourRings.end())
                .addDisplacementMarker(()->out.setPusherSpeed(SERVO_SPEED))
                .forward(53, SampleMecanumDrive.getVelocityConstraint(7, DriveConstants.MAX_ANG_VEL, DriveConstants.TRACK_WIDTH), SampleMecanumDrive.getAccelerationConstraint(DriveConstants.MAX_ACCEL))
                .build();

//        Trajectory trajectory5forFourRings = drive.trajectoryBuilder(trajectory4forFourRings.end())
//                .lineTo(new Vector2d(0, 0))
//                .addDisplacementMarker(()->
//                {
//                    drive.turn(Math.toRadians(-185));
//                    out.setVelocity(FLYWHEEL_POWER);
//                    out.setPusherSpeed(SERVO_SPEED);
//                })
//                .build();
//
//        Trajectory trajectory6forFourRings = drive.trajectoryBuilder(trajectory5forFourRings.end())
//                .addDisplacementMarker(()->
//                {
//                    out.setVelocity(0);
//                    out.setPusherSpeed(0);
//                })
//                .lineTo(new Vector2d(5, -17))
//                .build();
//

        waitForStart();
        CameraTest.RingDeterminationPipeline.RingPosition pos = pipeline.getNumberOfRings();

        telemetry.addData("Number of Rings", pos);
        telemetry.update();


        drive.followTrajectory(trajectory0forAllPaths);

        sleep(3000);

        out.setVelocity(0);

        out.setPusherSpeed(0);

        drive.turn(Math.toRadians(185));

        drive.setPoseEstimate(new Pose2d());

        if (pos == CameraTest.RingDeterminationPipeline.RingPosition.NONE) {
            drive.followTrajectory(trajectory1forNoRings);

            sleep(500);

            out.setPositionClaw(POSITION_OPEN_FIRST_CLAW, POSITION_OPEN_SECOND_CLAW);

            sleep(1500);

            drive.followTrajectory(trajectory2forNoRings);

            sleep(500);

            drive.followTrajectory(trajectory3forNoRings);


        }

        else if (pos == CameraTest.RingDeterminationPipeline.RingPosition.ONE) {

            telemetry.addData("sunt unde trebuie", "pwp Artur");
            telemetry.update();

            drive.followTrajectory(trajectory1forOneRing);

            sleep(500);

            out.setPositionClaw(POSITION_OPEN_FIRST_CLAW, POSITION_OPEN_SECOND_CLAW);

            sleep(1500);

            drive.followTrajectory(trajectory2forOneRing);

            sleep(500);

            drive.followTrajectory(trajectory3forOneRing);

            sleep(1000);

            out.setPusherSpeed(SERVO_SPEED);

            in.setVelocity(0, DcMotorSimple.Direction.FORWARD);

            sleep(2000);

            out.setVelocity(0);

            drive.setPoseEstimate(new Pose2d());

            drive.followTrajectory(trajectory4forOneRing);
        }

        else {
            drive.followTrajectory(trajectory1forFourRings);

            sleep(750);

            out.setPositionClaw(POSITION_OPEN_FIRST_CLAW, POSITION_OPEN_SECOND_CLAW);

            drive.followTrajectory(trajectory2forFourRings);

            drive.setPoseEstimate(new Pose2d(0, 0));

            drive.followTrajectory(trajectory3forFourRings);

            drive.followTrajectory(trajectory4forFourRings);

            drive.followTrajectory(trajectory5forFourRings);
        }
    }
}


