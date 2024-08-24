#include <iostream>

using namespace std;


int main()

{

long long int n, i,s=0;

   cin>>n;

   for(i=1; i<=n; i++)

       s=s+n-i;

   cout << s;

   return 0;

}