#include <iostream>

using namespace std;

void SumPwr2 (int a, int pwr)
{
    if (a==0) return;
    if (a%2==1)
    {
        cout<<pwr<<" ";
        SumPwr2(a/2, pwr*2);
    }
    else SumPwr2(a/2, pwr*2);
}

int main()
{
    int x,y=1;
    cin>>x;
    SumPwr2(x,y);
    return 0;
}