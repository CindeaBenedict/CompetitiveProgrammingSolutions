#include <fstream>
using namespace std;

bool rotund(long long x)
{
   long long xc = x, p = 1;
   int nrcif = 1;
   while (xc > 9)
   {
      p *= 10;
      nrcif++;
      xc /= 10;
   }
   xc = x;

   for (int t = 1; t < nrcif; ++t)
   {
      xc = (xc%p) * 10 + (xc/p);
      if (xc == x)
         return true;
   }

   return false;
}

int main()
{
   ifstream fin ("rotund.in");
   ofstream fout ("rotund.out");
   int n, i, k;   fin >> n;
   long long rotunde[n];
   long long x;

   for (i=k=0; i < n; ++i)
   {
      fin >> x;
      if (rotund(x))
         rotunde[k++] = x;
   }

   fout << k << '\n';
   for (i = 0; i < k; ++i)
      fout << rotunde[i] << ' ';

   fin.close();
   fout.close();
   return 0;
}