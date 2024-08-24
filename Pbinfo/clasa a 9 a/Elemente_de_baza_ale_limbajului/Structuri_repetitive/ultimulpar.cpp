#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n;
    int a=-1;
    int tmp;
    cin >> n;
    for (int i=0 ; i<n ; i ++){
    cin >> tmp;
    if (tmp % 2 == 0)
    a = tmp;
    }
    if (a==-1)
    cout << "IMPOSIBIL";
    else
    cout << a;
    return 0;
}