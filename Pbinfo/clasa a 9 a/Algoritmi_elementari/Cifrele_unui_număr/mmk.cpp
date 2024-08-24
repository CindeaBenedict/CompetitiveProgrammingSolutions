#include <iostream>
using namespace std;
int main ()
{
int n,k;
bool ok=true;
cin>>n>>k;
    while(n>0)
    {
     if(n%10>k) 
     {ok=false;
      break;}
        n=n/10;
    }
    if(ok==true) cout<<"DA";
    else cout<<"NU";
 
return 0;
}