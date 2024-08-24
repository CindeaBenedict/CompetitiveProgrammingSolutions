#include <iostream>
using namespace std;
int main(){
int n,m,c,i=0,f=0,v=0;
    cin>>n>>m>>c;
    for(int t=n;t<=m;t++)
        i=i+t;
    for(int j=m;j<=c;j++)
        f=f+j;
     for(int e=n;e<=c;e++)
        v=v+e;
    cout<<i<<" "<<f<<" "<<v;

}