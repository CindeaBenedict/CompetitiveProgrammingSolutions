#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[501];
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    bool crescator = true;

    for(int i = 2; i <= n; ++i)
        if(a[i] < a[i-1])
            crescator = false;

    if(crescator)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}