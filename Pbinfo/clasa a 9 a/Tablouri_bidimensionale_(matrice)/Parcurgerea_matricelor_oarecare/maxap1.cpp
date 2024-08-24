#include <iostream>
#include <algorithm>

using namespace std;
int f[1000001];
int main()
{
    int n,m,a[102][102],v[10000],t=0,maxim=0,ok=0;
    cin >>n>>m;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>a[i][j];
            v[t]=a[i][j];
            t++;
            f[a[i][j]]++;
            if(f[a[i][j]]>maxim) maxim=f[a[i][j]];
        }
    }
    sort(v,v+t);
    for(int i=0;i<t;++i)
    {
        if(f[v[i]]==maxim)
        ok=v[i];
    }
    cout<<ok;
    return 0;
}
