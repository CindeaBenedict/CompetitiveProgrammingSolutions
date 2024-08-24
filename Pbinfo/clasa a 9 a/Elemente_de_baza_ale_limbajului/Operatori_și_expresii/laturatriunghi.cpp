#include <iostream>

#include <cmath>

#include <iomanip>

#define pi 3.14159265

using namespace std;

int main()

{

double a, b, u;

cin >> a >> b >> u;

double c = sqrt ( a * a + b * b - 2 * a * b * cos ( pi * u / 180 ) ) ;

cout << fixed << setprecision(2) << c;

return 0;

}

