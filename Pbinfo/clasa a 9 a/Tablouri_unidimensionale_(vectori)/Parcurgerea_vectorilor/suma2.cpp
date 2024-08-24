
#include <iostream>
using namespace std;
int main()
{
    long long n,i,a[1001],inceput,sfarsit,s=0;
    bool gasit=false;
    cin>>n;
    for(i=1;i<=n;i++)
     cin>>a[i];
    for(i=1;i<=n;i++)
        if(a[i]%2==0)
    {inceput=i; gasit=true; break;}
    for(i=n;i>=1;i--)
        if(a[i]%2==0)
    {sfarsit=i; break;}
    for(i=inceput;i<=sfarsit;i++)
    {s=s+a[i];}
    if(gasit==false) cout<<"NU EXISTA";
        else cout<<s;
        return 0;
}