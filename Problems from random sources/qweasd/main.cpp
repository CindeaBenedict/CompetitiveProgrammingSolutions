#include <bits/stdc++.h>
using namespace std;
ifstream in("mostenire3.in");
ofstream out("mostenire3.out");
long long stot,ans=-1,st,dr,mij,s;
int n,k,t;
struct sac
{
    int p,u,nr;
} a[100002],aux;
int beci[100002];
bool test(sac x, sac y)
{
    return x.nr>y.nr;
}
bool pot(long long w)
{
  s=0ll,t=0;
  for(int i=1;i<=n;++i)
  {
      s+=beci[i];
      if(s>=w)
          t++,s=0;
  }
  return (t>=k);
}
int main()
{
    in>>n>>k;
    for(int i=1;i<=n;++i)
        in>>beci[i], stot+=beci[i];
    st=1,dr=stot;
    while(st<=dr)
    {
        mij=(st+dr)/2;
        if(pot(mij))
        {
            ans=mij,st=mij+1;
        }
        else
            dr=mij-1;
    }
    out<<ans<<'\n';
    s=0ll;
    t=1;
    int z=0;
    for(int i=1;i<=n;++i)
    {
        s+=beci[i];
        if(s>=ans)
        {
           aux.nr=s;
           aux.p=t, aux.u=i;
           a[z++]=aux;
           s=0, t=i+1;
        }
    }
    s=0;
    for(int i=a[k-1].p;i<=n;++i) s+=beci[i];
    a[k-1].u=n,a[k-1].nr=s;
    sort(a,a+z,test);
    for(int i=0;i<z;++i)
       out<<a[i].p<<' '<<a[i].u<<'\n';
    out.close();
    return 0;
}
