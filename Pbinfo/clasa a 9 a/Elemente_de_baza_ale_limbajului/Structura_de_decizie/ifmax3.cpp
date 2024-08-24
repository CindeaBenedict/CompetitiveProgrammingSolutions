#include <bits/stdc++.h>


using namespace std;

int main()
{
    int x,a,b,c;
    cin >> x;
    a=x/100;
    b=(x%100)/10;
    c=(x%100)%10;
    if (a>b && a>c)
        cout << a;
    else if(b>a && b>c)
        cout << b;
        else
            cout << c;
    return 0;
  
}