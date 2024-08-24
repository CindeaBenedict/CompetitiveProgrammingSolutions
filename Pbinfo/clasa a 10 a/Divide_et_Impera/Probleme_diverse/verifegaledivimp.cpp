#include <iostream>
using namespace std;

int n,v[1001];

bool ToateEgale(int st, int dr, int a)
{
    if (st==dr) return v[st]==a;
    int mij=(st+dr)/2;
    return ToateEgale(st,mij,a) && ToateEgale (mij+1,dr,a);
}

int main()
{
    cin>>n;
    cin>>v[1];
    int a=v[1];
    for (int i=2; i<=n; i++) cin>>v[i];
    if (ToateEgale(1,n,a)) cout<<"DA";
    else cout<<"NU";
}