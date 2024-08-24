#include <iostream>

using namespace std;

int main()
{
    int a[100],i,n;
    ///***********CITIRE ELEMENTE VECTOR
    cout<<"n=";
    cin>>n;
    for(i=1;i<=n;i++)
      {
          cout<<"a["<<i<<"]=";
           cin>>a[i];
      }
    ///********AFISARE ELEMENTE
    for(i=1;i<=n;i++)
       cout<<a[i]<<" ";

   ///********suma elementelor
   int s=0;
   for(i=1;i<=n;i++)
       s=s+a[i];

    return 0;
}
