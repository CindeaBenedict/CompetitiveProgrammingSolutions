#include <iostream>
using namespace std;

void sumcif(int n , int& sp , int& si)
{
    sp=0;
    si=0;
    while (n)
    {
        if ((n%10)%2==0)
            sp+=n%10;
        if ((n%10)%2==1)
            si+=n%10;
        n/=10;
    }
}
int main() {
    int n,sp,si;
    cin>>n;
    sumcif(n,sp,si);
    cout<<sp<<" "<<si<<"\n";

    return 0;
}
