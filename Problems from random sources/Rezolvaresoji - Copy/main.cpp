#include <iostream>

using namespace std;
int a[501][501];
int main()
{
    int n,m,t,cer,x,y,poz;
    cin>>cer;//cerinta
    cin>>n>>m;//randuri //coloane
    cin>>t;//numarul de pozitii


while (t--)
        cin>>x>>y;
        poz=x*y;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(poz=i*j)
        a[i][j]==1;




        for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
      cout<<a[i][j];

    return 0;
}
