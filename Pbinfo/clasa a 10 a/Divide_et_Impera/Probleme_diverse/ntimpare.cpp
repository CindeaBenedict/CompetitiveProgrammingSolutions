#include <iostream>

using namespace std;

int nrImp (int v[], int st, int dr)
{
    if (st==dr)
    {
        if (v[st]%2==1) return 1;
        else return 0;
    }
    int mij=(st+dr)/2;
    return nrImp(v,st,mij) + nrImp(v,mij+1,dr);
}

int main()
{
    int n,vec[1001];
    cin>>n;
    for (int i=1; i<=n; i++) cin>>vec[i];
    cout<<nrImp(vec,1,n);

    return 0;
}