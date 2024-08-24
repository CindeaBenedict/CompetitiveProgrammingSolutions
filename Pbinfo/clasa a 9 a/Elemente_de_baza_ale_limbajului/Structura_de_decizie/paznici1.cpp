#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m;
    cin >> n >> m;
    if(n%2==1)
        n++;
    if(m%2==1)
        m++;
    cout << 1LL * (n / 2) * (m / 2);
    return 0;
}