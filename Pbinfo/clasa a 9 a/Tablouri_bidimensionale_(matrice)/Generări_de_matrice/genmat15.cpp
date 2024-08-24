#include <iostream>
using namespace std;
int main()
{
    int n , m , a[20][20] , x = 1;
    cin >> n >> m;
    for(int i = 1 ; i <= n ; ++i)
    {
        for(int j = 1 ; j <= m ; ++j)
        {
            a[i][j]=x;
            x++;
        }
    }
    for(int i = 1 ; i <= n ; ++i)
    {
        if(i % 2 == 0)
        {
        for(int j = m ; j >= 1 ; --j)
        {
            cout << a[i][j] <<" ";
        }
        }
        else
        {
        for(int j = 1 ; j <= m ; ++j)
        {
            cout << a[i][j] <<" ";
        }
        }
        cout << endl;
    }
}