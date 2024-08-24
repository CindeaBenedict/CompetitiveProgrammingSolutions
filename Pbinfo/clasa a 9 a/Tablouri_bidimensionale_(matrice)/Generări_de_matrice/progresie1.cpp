#include <iostream>
using namespace std;
int main()
{
    int m, r ,n , a[200][200] , v[100000];
    cin >> m >> r >> n;
    for(int i = 0 ; i < n*n ; ++i)
    {
        v[i]=m;
        m=m+r;
    }
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = i ; j < n*n ; j+=n)
        {
            cout << v[j] <<" ";
        }
        cout << endl;
    }
}