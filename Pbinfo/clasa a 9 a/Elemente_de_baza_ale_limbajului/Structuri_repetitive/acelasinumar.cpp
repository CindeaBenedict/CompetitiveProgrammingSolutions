#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int tmp;
    int s=0;
    for (int i=1 ; i <= k; ++i)
    {
        cin >> tmp;
        s+=tmp;
    }
    if (s==0)
    cout << "DA";
    else 
    cout << "NU";
    return 0;
}