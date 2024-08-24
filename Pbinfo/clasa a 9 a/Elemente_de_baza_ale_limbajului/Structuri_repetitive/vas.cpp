#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, t , y;
    cin >> x >> t >> y;
    long long int rez = 0;
    while(x > y)
    {
        x = x - (x/4);
        rez += t;
    }
    cout << rez;
    return 0;   
}