#include <bits/stdc++.h>

using namespace std;

int r, g, b, r1, r2, g1, g2, b1, b2, n, i;

int main()
{
    cin >> r1 >> g1 >> b1 >> r2 >> g2 >> b2 >> n;
    
    r = r2 - r1, g = g2 - g1, b = b2 - b1, --n;
    
    cout << r1 << ", " << g1 << ", " << b1 << '\n';
    
    for (int i = 1; i <= n; ++i)
        cout << (int)(r1 + r * i / (double)n) << ", " << (int)(g1 + g * i / (double)n) << ", " << (int)(b1 + b * i / (double)n) << '\n';
    
    return 0;
}