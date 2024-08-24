#include <iostream>
using namespace std;
int n,m,a[100][100],c;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
            cin>>a[i][j];
    c=a[n][m];
    for(int i=1;i<=n;++i)
    {
        a[i][1]=c;
        a[i][m]=c;
    }
    for(int i=1;i<=m;++i)
    {
        a[1][i]=c;
        a[n][i]=c;
    }
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}