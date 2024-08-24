#include <iostream>
using namespace std;
int n,m,x,a[101][101];
int main()
{
    bool ok=false;
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
            cin>>a[i][j];
    cin>>x;
    for(int i=1;i<=n;++i)
        if(a[i][1]==x||a[i][m]==x) 
        ok=true;
    for(int j=1;j<=m;++j)
        if(a[1][j]==x||a[n][j]==x)
        ok=true;
    if(ok==true)
        cout<<"DA";
    else cout<<"NU";
    return 0;
}