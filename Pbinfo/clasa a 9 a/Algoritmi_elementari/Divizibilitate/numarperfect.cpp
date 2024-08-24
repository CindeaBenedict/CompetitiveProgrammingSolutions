#include <iostream>
using namespace std;
int main ()
{
    int n,s=0;
    cin>>n;
   
    for(int d=1; d<=n/2;d++)
        if (n%d==0)
        
     s=s+d;
        if(s==n)
        cout<<n<<" este perfect";
        else
        cout<<n<<" nu este perfect";
 return 0;
}