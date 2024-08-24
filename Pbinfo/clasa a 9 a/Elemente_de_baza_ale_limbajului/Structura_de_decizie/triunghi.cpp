#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a,b,c;
    cin >> a >> b >> c;
    if (a<b+c && b<a+c && c<a+b)
        cout << "da";
    else 
        cout << "nu";
    return 0;
}