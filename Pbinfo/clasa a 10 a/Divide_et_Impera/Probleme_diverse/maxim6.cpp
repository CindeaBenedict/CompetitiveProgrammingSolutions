#include <iostream>
using namespace std;

int n,v[1001];

int Max(int st, int dr)
{
    if (st==dr) return v[st];
    int mij=(st+dr)/2;
    int a=Max(st,mij);
    int b=Max(mij+1,dr);
    if (a>b) return a;
    else return b;

}
int main()
{
    cin>>n;
    for (int i=0; i<=n-1; i++) cin>>v[i];
    cout<<Max(0,n-1);
}