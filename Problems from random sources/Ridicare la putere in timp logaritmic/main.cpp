#include<iostream>
using namespace std;

int main()
{
    int a,b;
int    rez=1;
cin>>a>>b;
    while(b!=0)
         if(b%2==0)
    {
        a=a*a;b=b/2;
    }
    else
    {
        b--;rez=rez*a;
    }
    cout<<rez;
    return 0;
}
