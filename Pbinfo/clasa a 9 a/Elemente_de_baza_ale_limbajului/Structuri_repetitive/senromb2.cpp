#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; ++i)
    {
        // scriu n - i carcatere #
        for (int j = 1; j <= n - i; ++j)
            cout << '#';
        
        // scriu
        for (int j = 1; j < 2 * i; ++j)
            cout << '*';
            
        // scriu n - i carcatere #
        for (int j = 1; j <= n - i; ++j)
            cout << '#';
        
        cout << '\n'; // coboram pe linia urmatoare
    }
    
    for (int i = 1; i < n; ++i)     // mai sriem n - 1 linii
    {
        // scriu i caractere #
        for (int j = 1; j <= i; ++j)
            cout << '#';
        
        // scriu 2 * n - 1 - 2 * i  carcatere *
        for (int j = 1; j <= 2 * n - 1 - 2 * i; ++j)
            cout << '*';
        
        // scriu i carctere #
        for (int j = 1; j <= i; ++j)
            cout << '#';
        cout << '\n';
    }
    return 0;
}