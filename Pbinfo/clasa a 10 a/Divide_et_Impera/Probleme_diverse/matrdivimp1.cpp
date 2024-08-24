#include <iostream>

using namespace std;

int SumPar (int v[], int st, int dr)
{
    if (st==dr)
    {
        if (v[st]%2==0) return v[st];
        else return 0;
    }
    int mij=(st+dr)/2;
    return SumPar(v,st,mij) + SumPar(v,mij+1,dr);
}

int main()
{
    int m,n,M[101][101],vLin[101],S=0;
    cin>>n>>m;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
        {
            cin>>M[i][j];
            vLin[j]=M[i][j];
        }
        S+=SumPar(vLin,1,m);
    }
    cout<<S;

    return 0;
}