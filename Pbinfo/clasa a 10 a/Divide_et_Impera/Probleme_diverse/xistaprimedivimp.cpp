#include <iostream>
#include <cmath>

using namespace std;

bool ePrim (int a)
{
    for (int k=2; k<=sqrt(a); k++)
        if (a%k==0) return false;
    return true;
}

bool existaPrim (int v[], int st, int dr)
{
    if (st==dr) return ePrim (v[st]);
    int mij=(st+dr)/2;
    return existaPrim(v,st,mij) || existaPrim(v,mij+1,dr);
}

int main()
{
    int n,vec[201];
    cin>>n;
    for (int i=1; i<=n; i++) cin>>vec[i];
    if (existaPrim(vec,1,n)) cout<<"DA";
    else cout<<"NU";

    return 0;
}