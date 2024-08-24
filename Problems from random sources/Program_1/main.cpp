#include <iostream>

using namespace std;
int main()
{  int n,x,p,cifra;
    x=0;p=1;
    cin>>n;
    while(n!=0)
{ cifra=n%10;
    if(cifra%2==0)
    {x=x+cifra*p;
    p=p*10;
    }
    n=n/10;
}
    cout<<x;
    return 0;
}
