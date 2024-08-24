#include <iostream>
using namespace std;
int main(){
    int n,i,j,a[100][100];
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        if(j==1)
        a[i][1]=1;
         for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        if(a[i][j]==0 && i==n)
        a[i][j]=a[i][j-1]+1;
        for(i=n;i>=1;i--)
        for(j=1;j<=n;j++)
        if( i!=n && j!=1)
        a[i][j]=a[i+1][j]+a[i][j-1];
        
        
        for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
return 0;
}