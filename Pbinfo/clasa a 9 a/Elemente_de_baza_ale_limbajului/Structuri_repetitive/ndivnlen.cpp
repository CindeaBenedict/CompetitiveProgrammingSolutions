#include <iostream>

int nrCif(int x)
{
   if (x <= 9) return 1;
   if (x <= 99)   return 2;
   if (x <= 999)  return 3;
   if (x <= 9999) return 4;
   if (x <= 99999)   return 5;
   if (x <= 999999)  return 6;
   return -1;
}

int main()
{
   int n, i;
   std::cin >> n;

   std::cout << n;
   for (i = nrCif(n); i < n; ++i)
      std::cout << 0;
   
   return 0;
}