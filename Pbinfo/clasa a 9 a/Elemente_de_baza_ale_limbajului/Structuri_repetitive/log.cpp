#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p = 1;
    int n , m;
    cin >> n >> m;
    int i;
    for(i = 0 ; p != m ; ++i)
        p*=n;
    cout << i;
    return 0;
}