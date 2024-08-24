#include <fstream>

using namespace std;

ifstream fin("secv2.in");
ofstream fout("secv2.out");

int n, k, a[50005],j,i;
int suma_maxima, minim, poz_minim, pozininitiala , finis;

int main()
{
    fin >> n >> k;
    for(i = 1; i <= n; i++)
    {
        fin >> j;
        a[i] = a[i - 1] + j;
    }
    for( i = 1; i <= n; i++)
    {
        if(a[i] - minim > suma_maxima && i - poz_minim>= k)
        {
            suma_maxima = a[i] - minim;
            pozininitiala  = poz_minim+ 1;
            finis = i;
        }
        if(i - k + 1 >= 1 && a[i] - a[i - k] > suma_maxima)
        {
            suma_maxima = a[i] - a[i - k];
            pozininitiala  = i - k + 1;
            finis= i;
        }
        if(a[i] < minim)
        {
            minim = a[i];
            poz_minim = i;
        }
    }
    fout << pozininitiala <<" " << finis << " "<< suma_maxima <<endl;
    return 0;
}
