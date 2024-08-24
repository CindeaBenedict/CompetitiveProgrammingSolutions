#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


int main()
{
    int a,b,c,d;
    cin>>a;
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a%10;
    b=b*b;
    c=c*c;
    d=d*d;
    cout<<b+c+d;
    return 0;
}