#include <iostream>
using namespace std;
int main ()
{
    long long n;
    int p=1,cnt=0;
    cin>>n;
    while(n>0)
    {
        if(n%10%2!=0) {p=p*(n%10); cnt++;}
        n=n/10;
    }
    if(cnt==0) cout<<"-1";
    else cout<<p;
    return 0;
}