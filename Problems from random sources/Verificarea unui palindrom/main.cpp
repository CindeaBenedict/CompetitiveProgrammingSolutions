#include <iostream>

using namespace std;

int main()
{
 int n, inv=0, aux=0;
 cin>>n;
 aux=n;
 while (n>0)
 {

     inv=inv*10+n%10;
     n=n/10;}
     if(aux==inv)
        cout<<"este palindrom";
     else
        cout<<"nu este palindrom";

    return 0;
}
