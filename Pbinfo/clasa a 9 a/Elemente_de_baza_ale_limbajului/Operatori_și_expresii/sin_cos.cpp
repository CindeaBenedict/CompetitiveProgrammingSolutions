#include <iostream>
#include <iomanip>
#include <math.h>



using namespace std;

#define PI 3.14159265

int main(){
    double n;
    cin >> n;
    cout << fixed << setprecision(3) << sin(n * PI / 180) <<" " << cos(n * PI / 180);
    return 0;
}