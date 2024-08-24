#include <fstream>

using namespace std;

ifstream cin ("aranjamente.in");
ofstream cout ("aranjamente.out");

int x[10],p[10],n,k;

void afisare()
{
    for (int i=1; i<=k; ++i) cout<<x[i]<<" ";
    cout<<"\n";
}

void bectreching (int ind)
{
    for (int i=1; i<=n; ++i)
    {
        if (!p[i])
        {
            p[i]=1;
            x[ind]=i;
            if (ind<k) bectreching(ind+1);
            else afisare();
            p[i]=0;
        }
    }
}

int main()
{
    cin>>n>>k;
    bectreching(1);

    return 0;
}