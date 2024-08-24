#include <iostream>

using namespace std;

int n,k,x[21];

void afisare ()
{
    bool ok=true;
    for (int i=1; i<k; ++i)
    {
        if (x[i]%2==0 && x[i+1]%2==0){
            ok=false;
            break;
        }
    }
    if (ok){
        for (int i=1; i<=k; ++i) cout<<x[i]<<" ";
        cout<<"\n";
    }
}

void back (int viz)
{
    for (int i=x[viz-1]+1; i<=n-k+viz; ++i)
    {
        x[viz]=i;
        if (viz<k) back(viz+1);
        else afisare();
    }
}

int main()
{
    cin>>n>>k;
    back(1);

    return 0;
}