#include <iostream>
using namespace std;
int n,m,a[100][100],p,s,t,f,min1=10000,min2=10000;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j) cin>>a[i][j];
    for(int i=1;i<=n;++i)
    {
        if(a[i][1]<min1) min1=a[i][1],s=i,p=1;
        if(a[i][m]<min2) min2=a[i][m],t=i,f=m;
    }
    swap(a[s][p],a[t][f]);
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j) cout<<a[i][j]<<" ";
        cout << endl;
    }
    return 0;
}

