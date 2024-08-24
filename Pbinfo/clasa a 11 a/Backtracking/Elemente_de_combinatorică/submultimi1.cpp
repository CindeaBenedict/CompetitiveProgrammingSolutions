#include <fstream>

using namespace std;

ifstream fin ("submultimi1.in");
ofstream fout ("submultimi1.out");

int n,x[11];

void afisare (int a)
{
    for (int i=1; i<=a; ++i) fout<<x[i]<<" ";
    fout<<"\n";
}

bool OK (int a)
{
    for (int i=1; i<a; ++i)
        if (x[i+1]-x[i]<2) return false;
    return true;
}

void back (int k)
{
    for (int i=x[k-1]+1; i<=n; ++i)
    {
        x[k]=i;
        if (OK(k)) afisare(k);
        if (k<n) back(k+1);
    }
}

int main()
{
    fin>>n;
    back(1);

    return 0;
}