#include <iostream>
using namespace std;
int main()
{
    int n,k,i,j;
    cin>>n>>k;
    int a[n+1][n+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i<=j+k && i>=j-k) || (i+j<=n+k+1 && i+j>=n-k+1)) a[i][j]=1;
            else a[i][j]=2;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
}