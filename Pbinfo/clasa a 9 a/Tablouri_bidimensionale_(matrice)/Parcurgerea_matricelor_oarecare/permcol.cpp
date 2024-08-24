#include <iostream>
using namespace std;
int main()
{
int a[1000][1000],m,n,i,j,x=1;
    cin>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
           cin>>a[i][j];
    for(i=1;i<=m;i++)
    { 
        for(j=2;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<a[x][1]; x++;
        cout<<endl;
    }
    return 0;}