#include <iostream>
using namespace std;

int n,v[1001];

bool ePrim (int a)
{
    for (int k=2; k*k<=a; k++)
        if (a%k==0) return false;
    return true;
}

int MaxPrim(int st, int dr)
{
    if (st==dr)
    {
        if (ePrim(v[st])) return v[st];
        else return -1;
    }
    int mij=(st+dr)/2;
    int a=MaxPrim(st,mij);
    int b=MaxPrim(mij+1,dr);
    if (a>b) return a;
    else return b;

}
int main()
{
    cin>>n;
    for (int i=0; i<=n-1; i++) cin>>v[i];
    cout<<MaxPrim(0,n-1);
}