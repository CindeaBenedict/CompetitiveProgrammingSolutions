#include <fstream>
using namespace std;

ifstream fin ("calcfunct.in");
ofstream fout ("calcfunct.out");

int poz_max(int v[], int n)
{
   int max = v[1], max_ind = 1;
   for (int i = 2; i <= n; ++i)
      if (v[i] > max)
      {
         max = v[i];
         max_ind = i;
      }

   return max_ind;
}

void poz_min(int v[], int n, int &minInd)
{
   int min = v[1];
   minInd = 1;
   for (int i = 2; i <= n; ++i)
      if (v[i] < min)
      {
         min = v[i];
         minInd = i;
      }
}

void interschimba(int &a, int &b)
{
   int aux = a;
   a = b;
   b = aux;
}

void afis_poz_descr(int v[], int pozInit, int pozFin)
{
   for (; pozFin >= pozInit; --pozFin)
      fout << v[pozFin] << ' ';
}

int main()
{
   int n, pozMax, pozMin;
   fin >> n;
   int v[n+1], i;
   for (i = 1; i <= n; ++i)
      fin >> v[i];

   pozMax = poz_max(v, n);
   poz_min(v, n, pozMin);
   if (pozMin > pozMax)
      interschimba(pozMin, pozMax);

   afis_poz_descr(v, pozMin, pozMax);
   return 0;
}