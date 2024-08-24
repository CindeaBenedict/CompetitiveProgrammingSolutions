#include <bits/stdc++.h>

using namespace std;

int a[3];

int main()
{
    cin >> a[0] >> a[1] >> a[2];
    sort(a , a + 3);
    int dif = a[2]-a[0];
    if(a[0] >= 0 && a[2] <= 255)
    {
        if(dif <= 10)
            cout << "GRI";
        else
            cout << "CULOARE";
    }
    else
        cout << "NU E CULOARE";
    return 0;
}