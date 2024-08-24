#include <iostream>
using namespace std;

int main()
{
   int a, b, c, d;
   cin >> a >> b >> c >> d;
   if (a % 3 != 0)  a++;
   if (a % 3 != 0)  a++;

   if (b % 3 != 0)  b--;
   if (b % 3 != 0)  b--;

   if (c % 3 != 0)  c++;
   if (c % 3 != 0)  c++;

   if (d % 3 != 0)  d--;
   if (d % 3 != 0)  d--;

   cout << ((b-a) /3 + 1) + ((d-c) /3 + 1);
   // punem + 1 deoarece, de la 2 pana la 5 sunt 5-2+1 numere,
   // iar de la 3 pana la 9, numarand din 3 in 3 sunt (9-3+3) numere, sau (9-3)/3+1 numere.
   return 0;
}