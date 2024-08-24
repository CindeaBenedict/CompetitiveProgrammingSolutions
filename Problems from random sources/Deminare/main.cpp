#include <iostream>
using namespace std;
//ifstream cin("deminare.in");
//ofstream cout("deminare.out");
int f[505],m[505][505];
int cerinta;
int x,y,g,n,t;
int cntmax;
int main()
{///cerinta 1
   cin>>cerinta;
   cin>>n>>g;
   cin>>t;
   if (cerinta==1){
    for(int i=1;i<=t;i++){
        cin>>x>>y;
        f[x]++;
        if(f[x]>cntmax)
            cntmax=f[x];
    }
    for(int i=1;i<=n;i++)
        if(f[i]==cntmax)
        cout<<i<<" ";
   }



  ///cerinta 2
   else if(cerinta==2){
    for(int i=1;i<=t;i++){
        cin>>x>>y;
        m[x][y]++;
    }
    }
    return 0;
}
