#include <iostream>
using namespace std;

int n,v[1001];

bool eOrdonat(int st, int dr, int a)
{
    if (st==dr) return v[st]>=a;
    int mij=(st+dr)/2;
    return eOrdonat (st,mij,v[mij-1]) && eOrdonat(mij+1,dr,v[dr-1]);
}

int main()
{
    cin>>n;
    cin>>v[1];
    for (int i=2; i<=n; i++) cin>>v[i];
    if (eOrdonat(1,n,v[1])) cout<<"DA";
    else cout<<"NU";
}