#include <iostream>
using namespace std;
int n,a[100][100];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        a[1][i]=i;
    for(int i=1;i<=n;i++)
        a[i][n]=n;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<n;j++)
            a[i][j]=a[i-1][j]+a[i-1][j+1];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[j][i]<<" ";
        cout<<endl;
    }
}