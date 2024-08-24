#include <iostream>
using namespace std;
int main()
{
    int n,a[35][35],i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j<=n+1) a[i][j]=i+j-1;
            else a[i][j]=2*n-i-j+1;
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}