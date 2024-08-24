#include <iostream>
using namespace std;
int main()

{
int n, nr=0;
cout<<"Introduceti numarul n: ";
cin>>n;
if(n==0)
nr=1;
else
{
while(n)
{
nr++;
n=n/10;
}
}
cout <<"Numarul n are "<<nr<<" cifre.";
return 0;
}
