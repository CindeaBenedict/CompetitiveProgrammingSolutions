#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,tmp,par,cnt=0;
    cin >> n;
    for (int i = 1; i<= n; ++i)
    {
        cin >> tmp;
        if (tmp%2==0 && cnt==0)
        {
            par=tmp;
            cnt++;
        }
    }
    if (cnt==0)
        cout << "IMPOSIBIL";
    else
        cout << par;
    return 0;
}