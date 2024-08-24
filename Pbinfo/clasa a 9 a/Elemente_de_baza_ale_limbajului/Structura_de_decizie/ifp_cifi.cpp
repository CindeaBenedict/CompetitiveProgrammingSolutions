#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a , b;
    cin >> a >> b;
    if(a % 2 == b % 2)
    {
        int cnt = 0;
        while(a)
        {
            if(a % 2 == 0)
                cnt++;
            a/=10;
        }
        while(b)
        {
            if(b % 2 == 0)
                cnt++;
            b/=10;
        }
        cout << cnt;
    }
    else
    {
        int cnt = 0;
        while(a)
        {
            if(a % 2 == 1)
                cnt++;
            a/=10;
        }
        while(b)
        {
            if(b % 2 == 1)
                cnt++;
            b/=10;
        }
        cout << cnt;
    }
    return 0;
}