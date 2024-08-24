#include <iostream>

using namespace std;

int divizori(int n)
{
   int suma=0,i;
   for(i=1;i*i<=n;i++)
   {
       if(n%i==0)
       {
        suma+=i;
           if(i*i<n)
               suma+=n/i;
       }
   }
return suma;
}

int pnumar(int p)
{
   if(divizori(p)%2==p%2) return 1;
   return 0;
}

int kpn(int a, int b, int k)
{
   for(int i=a;i<=b;i++)
       if(k>0)
           {
               if(pnumar(i))k--;
               if(k==0) return i;
           }
   return -1;
}
int main()
{
    int n,m,p;
    cin>>n>>m>>p;
    cout<<kpn(n,m,p)<<endl;
    return 0;
}
