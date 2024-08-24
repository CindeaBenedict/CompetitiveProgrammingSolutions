#include <iostream>
using namespace std;
int main()
{
    int m[7][7],a[7],i,j,n;
    cin>>n;
    for(i=1;i<=6;i++)
    {
        a[i]=n%10;
        n=n/10;
    }
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6;j++)
            if(i<j) m[i][j]=a[i];
            else m[i][j]=a[j];
    }
    for(i=1;i<=6;i++)
        m[i][i]=0;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6;j++)
            cout<<m[i][j]<<' ';
        cout<<endl;
    }
}