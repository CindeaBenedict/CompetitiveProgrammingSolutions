#include <iostream>

using namespace std;

int main()
{
    int n,cnt=0;
    cin>>n;
    while (n>0)
    {
        if(n%10==5) cnt++;

        n=n/10;

    } cout<<cnt;
    /*nu inteleg
ce trebe sa fac*/
return 0;

}
