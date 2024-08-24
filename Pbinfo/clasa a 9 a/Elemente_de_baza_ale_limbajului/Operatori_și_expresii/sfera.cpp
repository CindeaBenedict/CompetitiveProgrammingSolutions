#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double r;
    double pi=atan(1)*4;
    cin>>r;
    cout<<fixed<<setprecision(2)<<(long long )((4*pi*r*r)*100)/100.0<<" "<<(long long)((4.0/3*pi*r*r*r)*100)/100.0;
    return 0;
}
