#include <iostream>
using namespace std;
int main(){
int n,a[101][101],i,j;
    cin>>n;
    for( i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        if(i!=j)
        a[i][j]=n-j+1;
        else
        a[i][j]=0;
        
   for(i=1;i<=n;i++)
    { for(j=1;j<=n;j++)
    
    cout<<a[i][j]<<" ";
     cout<<endl;}
        

return 0;
    
}