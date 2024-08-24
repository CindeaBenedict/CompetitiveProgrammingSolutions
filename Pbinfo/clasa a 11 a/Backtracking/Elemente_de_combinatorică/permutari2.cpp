#include <fstream>

using namespace std;

ifstream cin ("permutari2.in");
ofstream cout ("permutari2.out");

int n,v[10],x[10],p[10];

void afisare ()
{
    for (int i=1; i<=n; ++i) cout<<x[i]<<" ";
    cout<<endl;
}

void bectreching (int k)
{
    for (int i=1; i<=n; ++i)
    {
        if(!p[i])
        {
            x[k]=v[i];
            p[i]=1;
            if (k<n) bectreching(k+1);
            else afisare();
            p[i]=0;
        }
    }
}

int main ()
{
    cin>>n;
    for (int i=1; i<=n; ++i) cin>>v[i];
    for (int i=1; i<=n; ++i)
        for (int j=i; j<=n; ++j)
            if(v[i]>v[j]) swap(v[i],v[j]);
    bectreching(1);

    return 0;
}