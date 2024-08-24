#include <iostream>
using namespace std;
int main()
{
    int a[101][101],i,j,m,n,s=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
         for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
        if(a[i][j]%2==0)
            s=s+a[i][j];
    }
    cout<<s;
    return 0;
}