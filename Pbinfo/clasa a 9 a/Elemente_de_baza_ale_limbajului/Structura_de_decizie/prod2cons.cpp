#include <bits/stdc++.h>


using namespace std;

int main ()
{
    int a,b;
    cin >> a;
    b=(int)sqrt(a);
    if (a == b * (b + 1))
        cout << b << ' ' << b+1;
    else
        cout << "NU EXISTA";
    return 0;
}