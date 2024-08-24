#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,m;
    cin >> n >> m;
    int cnt = 0;
    if (n==0)
    cnt=1;
    while (n)
    {
        while (n%10==0)
        n/=10;
        if (m % (n%10) == 0)
            cnt++;
        n/=10;
    }
    cout << cnt;
    return 0;
}