/***#include <iostream>

using namespace std;

int main()
{
   int a,x,y,k,b;
   cin>>a;
   k=0;
   while(a!=0){
    cin>>b;
    if(a%2==b%2)
        k=k+1;
        a=b;
   }
   cout<<k;

    return 0;
}*/

/**#include <iostream>

using namespace std;

int main()
{
   int s1,s2,n,nr;
   cin>>n;
   s1=0;
   s2=0;
   while(n<0 || n>0){
    if(n%2==0)
        s1=s1+n%10;
        else
       s2=s2+n%10;
       n=n/10;
   }
    if(s1==s2)
        nr=1;
    cout<<nr;

    return 0;
}*/
#include <iostream>

using namespace std;

int main()
{
   int a,k,b;
   cin>>a>>b;
   k=0;
   if(a<b){
    a=a-b; b=a+b; a=b-a;}
 while(a>=b){
    a=a-b; k=k+2;
 }
   cout<<k;

    return 0;
}
