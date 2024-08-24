#include<iostream>
using namespace std;
int main()
{ int n;
 long long s=0;
 cin>>n;
 for(int i=1;i*i<=n;i++){
     if(n%i==0){
         s=s+i;
         if(i*i<n)
             s=s+n/i;
     }
 }
 cout<<s;
    return 0;}