#include <bits/stdc++.h>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{

    double n,x,s=0;
    cin>>n;
    for( int i=1; i<=n;i++)
    {
        cin>>x;
        s=s+x*x;
    }
    
    cout<<fixed<<setprecision(2)<<sqrt(s/n);

    return 0;
}