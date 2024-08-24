#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    int p;
    cin >> k >> n;
    p = k / n;
    if (k-p*n > n*(p+1)-k)
        cout << n*(p+1);
    else
        cout << p*n;
    return 0;
}