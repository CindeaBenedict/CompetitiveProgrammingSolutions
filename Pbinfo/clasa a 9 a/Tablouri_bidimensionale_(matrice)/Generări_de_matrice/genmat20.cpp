#include <iostream>
using namespace std;
int main()
{
    int n , a[31];
    cin >> n;
    for(int i = 1 ; i <= n ; ++i)
    {
        a[i]=i;
        a[i+n]=i;
    }
    for(int i = 1 ; i <= n ; ++i)
    {
        for(int j = i ; j < n+i ; ++j)
        cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}