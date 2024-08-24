#include <bits/stdc++.h>

using namespace std;
long long int prod(long long int a[], long long int st, long long int dr)
{
   long long int m,s1,s2;
   if(st==dr)
   {
       long long int i;
       if(a[st]==1||a[st]==0)return 0;
       for(i=2;i*i<=a[st];i++)
       {
           if(a[st]%i==0)return 0;
       }
       return a[st];
   }
   m=(st+dr)/2;
    s1=prod(a,st,m);
    s2=prod(a,m+1,dr);

    return s1+s2;
}



long long int i,v[100001],n,aux;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    cout<<prod(v,1,n);



   return 0;
}