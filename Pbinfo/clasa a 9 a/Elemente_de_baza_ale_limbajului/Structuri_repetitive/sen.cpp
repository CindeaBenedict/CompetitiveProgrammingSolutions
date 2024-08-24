#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int c;
    cin >> c;
    cin >> n;
    if (c==1)
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        cout << i;
        cout << endl;
    }
    if (c==3)
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n*2; ++j)
        cout << i;
        cout << endl;
    }
    if (c==2)
    {
    for (int i = 1; i <= n; ++i)
    {
        // pe linia i scriu n - i spatii
        for (int j = 1; j <= n - i; ++j)
            cout << ' ';
            
        // mai scriu 2 * i - 1 valori de i
        for (int j = 1; j <= 2 * i - 1; ++j)
            cout << i;
        cout << '\n';
    }
    
    
    for (int i = 1; i < n; ++i)
    {
        // scriem i spatii pe linia i
        for (int j = 1; j <= i; ++j)
            cout << ' ';
            
        for (int j = 1; j <= 2 * (n - i) - 1; ++j)
            cout << n - i;
        cout << '\n';
    }
    }
    if (c==4)
    for (int i = 1; i <= n; ++i)
    {
        // pe linia i scriu n - i spatii
        for (int j = 1; j <= n - i; ++j)
            cout << ' ';
            
        // mai scriu 2 * i - 1 valori de i
        for (int j = 1; j <= 2 * i - 1; ++j)
            cout << i;
        cout << '\n';
    }
    return 0;  
}