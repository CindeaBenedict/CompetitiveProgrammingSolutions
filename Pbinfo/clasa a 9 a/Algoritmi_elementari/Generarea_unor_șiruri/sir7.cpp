#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p,s=0;
    unsigned long long k;
    cin >> p >> k;
    if(k % 2 == 0) 
        cout << k / 2 + k - 2 << p;
    else 
        cout << k / 2 + k - 1 << p;
    return 0;
}