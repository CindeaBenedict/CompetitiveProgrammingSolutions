#include <bits/stdc++.h>
using namespace std;

bool gasesc(int elem, int a[], int st, int dr){
    if(st > dr)
        return 0;
    else{
        int mij = (st + dr) / 2;
        if(a[mij] == elem)
            return 1;
        else if(a[mij] < elem)
            return gasesc(elem, a, mij + 1, dr);
        else
            return gasesc(elem, a, st, mij - 1);
    }
}

/*
    while(st <= dr){
        int mij = (st + dr) / 2;
        if(a[mij] == val)
            return 1;
        else if(a[mij] < val)
            st = mij + 1;
        else
            dr = mij - 1;
    }
*/

int main()
{
    int n, m, a[25001], b[200001];
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    cin >> m;
    for(int i = 1; i <= m; ++i)
        cin >> b[i];
    for(int i = 1; i <= m; ++i)
        if(gasesc(b[i], a, 1, n))
            cout << 1 << ' ';
        else
            cout << 0 << ' ';
    return 0;
}