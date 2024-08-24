#include <bits/stdc++.h>


using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a/100!=0)
        cout << 3;
    else if (a/100==0 && a/10!=0)
        cout << 2;
        else
            cout <<1;
    return 0; 
}