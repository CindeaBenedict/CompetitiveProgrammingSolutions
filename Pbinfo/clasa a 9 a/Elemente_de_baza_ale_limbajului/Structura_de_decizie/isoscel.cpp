#include <bits/stdc++.h>
using namespace std;

int main(){

    float a, b, c;
    cin >> a >> b >> c;

    if(a + b <= c || a + c <= b || b + c <= a)
        cout << "Nu formeaza triunghi";
    else if((a == b && b != c) || (a == c && c != b) || (b == c && b != a))
        cout << "Formeaza triunghi isoscel";
    else
        cout << "Nu formeaza triunghi isoscel";
    return 0;
}