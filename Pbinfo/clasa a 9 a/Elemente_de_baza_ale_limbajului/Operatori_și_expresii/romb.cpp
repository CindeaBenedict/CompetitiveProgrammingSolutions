#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
    float x,y;
    cin >> x >> y;
    cout << sqrt(x*x/4 + y*y/4) * 4 << ' ';
    cout << x*y/2;
    return 0;
}