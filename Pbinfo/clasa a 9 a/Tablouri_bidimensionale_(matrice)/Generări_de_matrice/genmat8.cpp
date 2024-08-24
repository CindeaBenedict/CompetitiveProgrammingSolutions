#include <iostream>
using namespace std;
int main(){
int n,i,j,a[100][100];
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        if(i%2==0)
        a[i][j]=j;
        else if(i%2!=0)
        a[i][j]=i;
        for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
return 0;
}
