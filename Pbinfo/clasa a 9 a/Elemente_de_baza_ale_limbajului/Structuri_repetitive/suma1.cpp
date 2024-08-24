#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s = 0;
    int tmp =0;
    while (1)
    {
    int a = tmp;
    cin >> tmp;
    s+= tmp;
    if(tmp == a)
    break;
    }
    cout << s;
    return 0;
}