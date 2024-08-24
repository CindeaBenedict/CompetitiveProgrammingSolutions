#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a, b;
    cin >> a >> b;
    /*
        n = 4
        /   1   2   3   4
        1   *   *   *   *
        2   *   #   #   *
        3   *   #   #   *
        4   *   *   *   *
        
    */
    for(int lin = 1; lin <= n; ++lin){
        for(int col = 1; col <= n; ++col){
            if(lin == 1 || lin == n || col == 1 || col == n)
                cout << a;
            else
                cout << b;
        }
        cout << endl;
    }

    /*
        aaaa
        abba
        abba
        aaaa
    
    */

    return 0;
}