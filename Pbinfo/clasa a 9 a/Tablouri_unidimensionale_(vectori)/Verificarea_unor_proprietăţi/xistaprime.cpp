#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    bool ok=false;
    for(i=1;i<=n;i++)
    {
        bool prim=true;
        if(a[i]<2) prim=false;
        else if(a[i]==2) prim=true;
        else if(a[i]%2==0) prim= false;
        else for(int j=3; j*j<=a[i]; j+=2)
            if(a[i]%j==0) prim=false;
            if(prim) {ok=true; break;}
    }
    if(ok) cout<<"DA";
    else cout << "NU";}