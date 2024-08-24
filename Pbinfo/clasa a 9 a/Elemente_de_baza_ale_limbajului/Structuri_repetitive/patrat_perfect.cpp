#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m;
    cin>> m;
    long long int x;
    for(int i = 0 ; i < m ; ++i)
    {
         cin >> x;
        int n = sqrt(x);
        if(n*n==x)
            cout << "DA" << endl;
        else
            cout << "NU" << endl;
    }
}