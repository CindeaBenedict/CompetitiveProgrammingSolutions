#include <fstream>
std::ifstream fin ("prime.in");
std::ofstream fout ("prime.out");

bool prim(int x)
{
   if (x <= 1)
      return false;
   for (int d = 2; d*d <= x; ++d)
      if (x % d == 0)
         return false;

   return true;
}

int main()
{
   int n;
   fin >> n;
   int v[n], i;

   for (i = 0; i < n; ++i)
      fin >> v[i];

   for (i = 0; i < n; ++i)
      if (prim(v[i]))
         fout << v[i] << ' ';
   return 0;
}