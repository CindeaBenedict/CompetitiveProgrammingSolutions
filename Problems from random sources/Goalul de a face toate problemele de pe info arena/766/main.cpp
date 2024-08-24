#include <iostream>
using namespace std;
int main(){
int n,m,a[100][100],cnt=0,aux=0,i,j;
    cin>>n>>m;
    for( i=1;i<=n;i++)
        for(j=1;j<=m;j++)
		cin>>a[i][j];

        for(i=1;i<=n;i++){ cnt=0;
        for(j=1;j<=m;j++)
        if(a[i][j]%2==0)
        cnt++;
            if(cnt>aux)
            aux=cnt;
    }
  for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
            if(j==m)
                cout<<endl;
  }
return 0;
}
