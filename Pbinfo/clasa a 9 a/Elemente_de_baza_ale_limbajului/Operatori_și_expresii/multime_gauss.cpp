#include <iostream>
#include <cmath>

int main()
{
   long long n;
   std::cin >> n;

   std::cout << (int) ((1 + sqrt(8*n-7)) / 2);

   return 0;
}