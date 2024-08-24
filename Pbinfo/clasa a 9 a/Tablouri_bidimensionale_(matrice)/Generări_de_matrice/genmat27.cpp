#include <iostream>
using namespace std;
int n , m , a[25][25];

int main()
{
    cin >> n >> m;
    int p = 2 , cnt = 1 , i = 1 , j = 1;
    while(cnt <= n * m)
    {
        a[i][j] = p;
        j++;
        if(m + 1== j) j = 1 , i++;
        if((p + 2)% 5 == 0) p += 4;
        else p += 2;
        cnt++;
    }
    for(int i = 1 ; i <= n; i++)
    {
        for(int j = 1 ; j <= m; j++)
            cout << a[i][j] <<" ";
        cout << endl;
    }
}