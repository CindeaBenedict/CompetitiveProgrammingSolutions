#include <iostream>

using namespace std;

int main()
{
   int n,i,a[1001],cnt=0,s=0;
   double m;
   cin>>n;
   for(i=1;i<=n;i++)
    cin>>a[i];
   for(i=1;i<=n;i++)
    s=s+a[i];
    m=1.0*s/n;
   for(i=1;i<=n;i++)
    if(a[i]>m)
    cnt++;
   cout<<cnt;
    return 0;
}