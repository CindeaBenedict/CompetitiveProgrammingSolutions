#include <iostream>

using namespace std;

int main()
{int a[100][100];
    int n, k=0, q=0, z=1;
    cin>>n;
    k=n*2+1;
    q=n;
    for(int i=1;i<=k/2;i++)
    {
        for(int j=1;j<=i;j++)
            {
                a[i][j]=n-j+1;
                a[i][k-j+1]=n-j+1;
            }
        for(int j=i+1;j<=k-i+1;j++)
            a[i][j] = n-i+1;
        q--;
    }

    for(int i=k/2+1;i<=k;i++)
    {
        for(int j=1;j<=k-i+1;j++)
            {
                a[i][j]=n-j+1;
                a[i][k-j+1]=n-j+1;
            }
        for(int j=k-i+2;j<=k-(k-i)-1;j++)
            a[i][j]=i-n-1;
        q--;
    }


    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
