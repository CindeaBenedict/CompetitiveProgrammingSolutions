#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,x,y,v;
    cin >> n;
    cin >> x;
    cin >> y;
    cin >> v;
    cout << (x-1)*n+y << ' ';
    if (v%n==0) cout << v/n << ' ' << n;
    else cout << v/n+1 << ' ' << v%n;
    return 0;
}