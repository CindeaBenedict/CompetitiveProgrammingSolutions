#include <iostream>
using namespace std;
int main(){
int n,m,a[100][100],c;
    
    cin>>n>>m;
    c=n*m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
    {a[i][j]=c;
     c--;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    
return 0;
}