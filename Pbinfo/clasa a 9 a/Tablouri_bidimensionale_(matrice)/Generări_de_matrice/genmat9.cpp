#include <iostream>
using namespace std;
int main(){
int n,i,j,a[100][100];
    cin>>n;
   	for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
        if(i==1||j==1||i==n||j==n)
        a[i][j]=i+j;
        else
            a[i][j]=a[i-1][j-1]+a[i-1][j]+a[i-1][j+1];}
    
        
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;}


}