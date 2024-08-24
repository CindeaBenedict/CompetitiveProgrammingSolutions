#include <iostream>

using namespace std;

int main()
{
    int n,i,p=1;
    cin>>n;
    for(i=1;i<=n;i++ )
        if(n%i==0)
        p=p*i;
    cout<<p;
    return 0;
}
