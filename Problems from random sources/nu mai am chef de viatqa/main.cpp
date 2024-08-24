#include <iostream>
using namespace std;
int main(){
int n,m,a[100][100];

    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        if(i==j)
        a[i][j]=n*m;
        else
        a[i][j]=a[i][j-1]-1;
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;

    }
return 0;
}
