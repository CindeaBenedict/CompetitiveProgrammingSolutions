#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int cnt=0;
    int s=0;
    int tmp;
    for (int i=1; i <= n; ++i)
    {
        cin >> tmp; 
        if (tmp % 2 == 0)
        {
            cnt++;
            s+=tmp;
        }
    }
    cout << fixed << setprecision(2) << (float)s/cnt;
    return 0;
}