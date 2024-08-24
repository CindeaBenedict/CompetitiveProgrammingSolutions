#include <fstream>
std::ifstream fin ("div3.in");
std::ofstream fout ("div3.out");

int suma_cifre(int n)
{
   int sum = 0;
   
   while (n)
   {
      sum += n%10;
      n /= 10;
   }
   
   return sum; 
}

int main()
{
   int n;
   fin >> n;
   int v[n], i;
   
   for (i = 0; i < n; ++i)
      fin >> v[i];
   
   for (i = 0; i < n; ++i)
      if (suma_cifre(v[i]) % 3 == 0)
         fout << v[i] << ' ';
   return 0;
}