#include <iostream>
using namespace std;
int main()
{
    int n , a[25][25];
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <=n ; j++)
            if(i == 1 || i == n || j == 1 || j == n) a[i][j] = i+j;
    for(int j = n-1 ; j >= 2 ; j--)
        for(int i = n-1 ; i >= 2 ; i--)
            a[i][j] = a[i-1][j+1] + a[i][j+1] + a[i+1][j+1];
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <=n ; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

}