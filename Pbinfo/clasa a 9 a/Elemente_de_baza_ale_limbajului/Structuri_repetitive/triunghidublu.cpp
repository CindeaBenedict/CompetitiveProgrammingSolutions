#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    
    
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
            cout << '*';
        cout << '\n';
    }
    
    for (int i = 1; i <= n; ++i)  // pt fiecare linie i
    {
        for (int j = 1; j <= 2 * n; ++j) // scriu linia i
            if (j >= n + i)
                cout << '*';
            else
                cout << ' ';
        
        cout << '\n';
    }
    
    return 0;
}
