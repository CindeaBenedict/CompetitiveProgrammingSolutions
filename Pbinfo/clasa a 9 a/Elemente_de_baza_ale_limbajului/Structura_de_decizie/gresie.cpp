#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int a,b,d;
    cin >> a >> b >> d;
    int x,y;
    x=a/d;
    y=b/d;
    if (a % d != 0)
        x++;
    if (b % d != 0)
        y++;
    cout << x * y;
    return 0;
}