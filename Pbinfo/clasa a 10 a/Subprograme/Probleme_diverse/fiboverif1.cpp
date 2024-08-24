#include <fstream>
using namespace std;

bool fibo(int x)
{
   if (x == 1 || x == 2)
      return true;

   int a = 1, b = 1, c = 2;
   do
   {
      a = b;
      b = c;
      c = a+b;
   } while (c < x);

   if (c == x)
      return true;
   return false;
}

int main()
{
   ifstream fin ("fiboverif1.in");
   ofstream fout ("fiboverif1.out");
   int n, x;
   fin >> n;

   while (n--)
   {
      fin >> x;
      if (fibo(x))
         fout << x << ' ';
   }
   return 0;
}