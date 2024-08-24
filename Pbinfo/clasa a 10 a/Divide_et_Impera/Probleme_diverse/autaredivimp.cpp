#include <iostream>
using namespace std;

int n,m,x[1001],y[1001];

int GasitInVec(int v[],int st, int dr, int a)
{
    if (st==dr) {
        if (v[st]==a) return 1;
        else return 0;
    }
    int mij=(st+dr)/2;
    return GasitInVec(v,st,mij,a) || GasitInVec(v,mij+1,dr,a);
}

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++) cin>>x[i];
    cin>>m;
    for (int i=1; i<=m; i++)
    {
        cin>>y[i];
        cout<<GasitInVec(x,1,n,y[i])<<" ";
    }
}