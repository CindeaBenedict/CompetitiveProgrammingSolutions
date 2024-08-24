#include <fstream>

using namespace std;

ifstream cin ("submultimi.in");
ofstream cout ("submultimi.out");

int n,x[11];

void afisare(int a)
{
    for (int i=1; i<=a; ++i) cout<<x[i]<<" ";
    cout<<"\n";
}

void back (int viz)
{
    for (int i=x[viz-1]+1; i<=n; ++i)
    {
        x[viz]=i;
        afisare(viz);
        back(viz+1);
    }
}

int main ()
{
    cin>>n;
    back(1);

    return 0;
}