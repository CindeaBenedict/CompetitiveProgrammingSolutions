#include <iostream>
using namespace std;
int main()
{
    int n , a[18][18];
    cin >> n;
    for(int i = 0 ; i <= n+1 ; ++i)
    {
        for(int j = 0 ; j <= n+1 ; ++j)
        {

            if(i == 0 || i == n + 1 || j == 0 || j == n + 1 || i == 1)
            {
                a[i][j]=0;
                if(i==1)
                {
                    a[i][j]=j;
                }
            }
            else
            a[i][j] = a[i-1][j-1] + a[i-1][j] + a[i-1][j+1];
        }
    }
    for(int i = n ; i >= 1 ; --i)
    {
        for(int j = 1 ; j <= n ; ++j)
        {
            if(j > n + 1 - i) cout << 0 <<" ";
            else cout << a[i][j] <<" ";
        }
        cout << endl;
    }
}