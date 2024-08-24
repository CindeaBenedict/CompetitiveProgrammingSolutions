#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,a,b,c;
    cin >> x;
    a=x/100;
    b=(x%100)/10;
    c=(x%100)%10;
    if ((a<b && b<c) || (c<b && b<a))
        cout << b;
    else if ((b<a && a<c) || (c<a && a<b))
        cout << a;
        else 
            cout << c;
    return 0;
}