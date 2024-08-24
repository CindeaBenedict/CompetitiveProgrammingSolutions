#include <bits/stdc++.h>
using namespace std;

int n;

int main ()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) cout << '*';
        for (int k = 1; k <= n*3-i*2; k++) cout << ' ';
        for (int f = 1; f <= i; f++) cout << '*';
        cout << endl;
    }
     for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) cout << ' ';
        for (int k = 1; k <= n; k++) cout << '*';
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++) cout << '*';
        for (int k = 1; k <= n*3-i*2; k++) cout << ' ';
        for (int f = 1; f <= i; f++) cout << '*';
        cout << endl;
    }
}