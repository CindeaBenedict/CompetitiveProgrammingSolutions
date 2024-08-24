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
    int n,vec[1000];
    cin>>n;
    for (int i=1; i<=n; i++) cin>>vec[i];
    cout<<SumPar(vec,1,n);

    return 0;
}