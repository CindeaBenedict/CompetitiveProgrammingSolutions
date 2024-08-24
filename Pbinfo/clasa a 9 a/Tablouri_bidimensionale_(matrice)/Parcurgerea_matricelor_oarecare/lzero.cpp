#include <fstream>
using namespace std;
ifstream cin("colzero.in");
    ofstream cout("colzero.out");
int main(){
int n,i,j,m,a[11][11],b[11],cnt=0;   cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];

        for(j=1;j<=m;j++) {
        int s=0;
     for(i=1;i<=n;i++)
         s=s+a[i][j];
        b[j]=s;
    }
                   for(j=1;j<=m;j++)
                   if(b[j]==0)
                    cnt++;

cout<<cnt;
return 0;
}
