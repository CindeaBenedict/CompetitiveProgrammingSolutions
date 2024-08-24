#include <iostream>
///Sa se afiseze divizorii comuni a doua numere
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b) swap(a,b);
    for(int i=1;i<=a;i++)
        if(a%i==0&&b%i==0)
        cout<<i<<" ";
    return 0;
}
