#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int cnt=0;
    cout << 1;
    while (n)
    {
        n/=10;
        cnt++;
    }
    for (int i = 1; i <= (cnt-1) * k ; i++)
    cout << 0;
    return 0;   
}