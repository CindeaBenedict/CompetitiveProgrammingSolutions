#include <iostream>
#include <limits.h>
using namespace std;
int main()
{ int n;
  cin>>n;
  int max=INT_MIN;
  int min=INT_MAX;
 if (n==0)
     cout<<"0";
 else {
 while (n>0)
 { if(n%10>max)
     max=n%10;
  if(n%10<min)
      min=n%10;
  n=n/10;}
  cout<<min+max;
 }
 return 0;
}