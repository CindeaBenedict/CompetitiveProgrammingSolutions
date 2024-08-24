#include <iostream>

using namespace std;

int main()

{

   int l, r, i, j, nr=0;

   cin >> l >> r;

   for (i=l; i<=r; i++)

       for (j=i; j<=r; j++)

           if (i%2==0 && j%2==0) nr++;

   cout << nr;

   return 0;

}
