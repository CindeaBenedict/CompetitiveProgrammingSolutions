#include <iostream>
#include <cmath>
#include <iomanip>

/// a = 1/4 * n*l*l*ctg(pi/n)

using namespace std;
int main()
{
    float n,l;
    cin>>n>>l;

    double A=0;
    double cot=(1/tan(M_PI/n));
    A=n*l*l*cot/4;
    A=(int)(A*100)/100.;

    cout<<fixed<<setprecision(2)<<A;

    return 0;
}