#include <fstream>
#include <algorithm>
using namespace std;

ifstream cin("bucketsort.in");
ofstream cout("bucketsort.out");

int a[10001];

int main()
{
    int n,d;
    cin >> n;
    for(int i = 0 ; i < n ; ++i)
        cin >> a[i];
    cin >> d;
    sort(a , a + n);
    if(d==1)
        for(int i = n-1 ; i >= 0 ; --i)
            cout << a[i] << " ";
    else
        for(int i = 0 ; i < n ; ++i)
            cout << a[i] << " ";
    return 0;
}