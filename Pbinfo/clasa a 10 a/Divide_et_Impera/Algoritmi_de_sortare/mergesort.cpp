#include <iostream>
#include <algorithm>
using namespace std;
int a[100001];
int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; ++i)
        cin >> a[i];
    sort(a , a + n);

        for(int i = 0 ; i <= n-1 ; ++i)
            cout << a[i] << " ";
 
    return 0;
}


/**12
10 0 -1 -3 1 -4 9 3 -1 -4 3 -4 */