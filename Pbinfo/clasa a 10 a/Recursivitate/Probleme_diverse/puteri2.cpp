#include <iostream>
#define mod (int)1e9
using namespace std;

unsigned long long putere(int a, int n)
{
   if (n == 0)
      return 1;

   if (n % 2 == 0)
   {
      unsigned long long putere_noua = putere(a, n/2) % mod;
      return putere_noua * putere_noua % mod;
   }
   else
      return putere(a, n-1) % mod * a % mod;
}

int main()
{
   int a, n, p;
   cin >> a >> n >> p;
   long long p10 = 1;
   for (int i = 1; i <= p; ++i)
      p10 *= 10;

   cout << putere(a, n) % p10;
   return 0;
}