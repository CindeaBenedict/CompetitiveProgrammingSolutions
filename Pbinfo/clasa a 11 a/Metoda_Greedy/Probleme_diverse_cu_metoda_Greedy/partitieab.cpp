#include <iostream>
using namespace std;
    int n, a, b;
    int cnt1, cnt2;
    int i;
int main()
{

   cin >> n >> a >> b;

   cnt2 = 0;
   while (n % a != 0)
      n -= b,
      cnt2++;

   cnt1 = n / a;

   for (i = 1; i <= cnt1; ++i)
      cout << a << ' ';
   for (i = 1; i <= cnt2; ++i)
      cout << b << ' ';
   return 0;
}
