#include <iostream>

using namespace std;

int main()
{
    long long n,k2 = 0,k3 = 0 ;
    cin >> n;
    while( n > 0)
    {
        if(n % 10 == 2 )k2 ++;
        if(n % 10 == 3)k3 ++;
        n = n / 10;
    }
    if(k2 > k3)cout << 2;
    else 
        if(k3 > k2) cout << 3;
        else  cout << 2 << " " << 3;
    return 0;
}