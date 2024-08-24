#include <bits/stdc++.h>


using namespace std;

int main()
{
    int a;
    cin >> a;
    int arrayInfo[3];
    arrayInfo[0] = a % 10;
    a/=10;
    arrayInfo[1] = a % 10;
    a/=10;
    arrayInfo[2] = a % 10;
    a/=10;
    sort (arrayInfo , arrayInfo + 3);
    cout << arrayInfo[0] <<' '<< arrayInfo[1] <<' '<< arrayInfo[2];
    return 0;
}
