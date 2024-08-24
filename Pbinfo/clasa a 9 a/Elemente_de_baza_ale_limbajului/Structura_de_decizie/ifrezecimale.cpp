#include <bits/stdc++.h>
using namespace std;

int a[300];

int main()
{
    int p = 1;
    for(int i = 10 ; i <= 99 ; ++i)
    {
        a[p]=i/10;
        p++;
        a[p]=i%10;
        p++;
    }
    p--;
    int k;
    cin >> k;
    cout << a[k];
    return 0;
}