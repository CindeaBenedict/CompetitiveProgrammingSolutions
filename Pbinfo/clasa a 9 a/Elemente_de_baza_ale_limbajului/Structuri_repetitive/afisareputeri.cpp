#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int p=1;
    cout << p << ' ';
    if ( n==1 )
    {}
    else
    while (p*n<=m)
    {
        p*=n;
        cout << p << ' ';
    }
}