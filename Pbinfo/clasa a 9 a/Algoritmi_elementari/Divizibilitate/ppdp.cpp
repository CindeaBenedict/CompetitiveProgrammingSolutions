#include <iostream>


using namespace std;


int main()

{

   int n, d;

   cin >> n;

   for (d=2; d<=n/2; d++)

       if (n%d==0) break;

   cout << d*d;

   return 0;

}