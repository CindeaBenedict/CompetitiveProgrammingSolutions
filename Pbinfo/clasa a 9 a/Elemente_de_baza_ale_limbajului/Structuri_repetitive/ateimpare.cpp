#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s = 0;
    int tmp =-1;
    while (tmp)
    {
    cin >> tmp;
    if (tmp%2==1)
    s++;
    }
    cout << s;
    return 0;
}