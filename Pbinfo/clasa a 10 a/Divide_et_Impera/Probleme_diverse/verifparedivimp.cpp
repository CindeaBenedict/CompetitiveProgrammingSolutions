#include <iostream>

using namespace std;

bool ToatePare (int v[], int st, int dr)
{
    if (st==dr) return v[st]%2==0;
    int mij=(st+dr)/2;
    return ToatePare(v,st,mij) && ToatePare(v,mij+1,dr);
}

int main()
{
    int n,vec[1001];
    cin>>n;
    for (int i=1; i<=n; i++) cin>>vec[i];
    if (ToatePare(vec,1,n)) cout<<"DA";
    else cout<<"NU";

    return 0;
}