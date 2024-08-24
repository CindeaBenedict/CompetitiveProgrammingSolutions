#include <iostream>
using namespace std;

int main()
{
    int n , m , a[101][101] , aux = 0 , cnt = 0;
    cin >> n >> m;
    for(int i = 1 ; i <= n ; ++i)
    {
        cnt=0;
        for(int j = 1 ; j <= m ; ++j)
        {
            cin >> a[i][j];
            if(a[i][j]%2==0)
            cnt++;
        }
        if(cnt>aux)
        aux=cnt;
    }
    for(int i = 1 ; i <= n ; ++i)
    {
        int cnt=0;
        for(int j = 1 ; j <= m ; ++j)
        {
            if(a[i][j]%2==0)
            cnt++;
        }
        if(cnt==aux)
        cout << i <<" ";
    }
    return 0;
}