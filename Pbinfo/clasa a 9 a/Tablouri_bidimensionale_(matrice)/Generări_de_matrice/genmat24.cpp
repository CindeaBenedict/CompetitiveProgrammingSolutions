#include <iostream>
using namespace std;
int n , a[1001];
int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; ++i) cin >> a[i];
    for(int i = 1 ; i <= n ; ++i)
    {
        for(int j = 1 ; j <= n ; ++j)
            if(j % 2 == 0) cout << a[i] <<" ";
            else cout << a[n - i + 1] <<" ";
        cout << endl;
    }
    return 0;
}