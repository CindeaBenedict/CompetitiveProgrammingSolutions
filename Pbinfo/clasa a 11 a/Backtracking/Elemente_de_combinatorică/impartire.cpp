#include <iostream>
#include <limits.h>
#include <algorithm>

using namespace std;

int n , x[20] , p[20] , a[20] , mini = 1000000000;

int suma(int n)
{
    int sum = 0;
    for(int i = 1 ; i < n ; i += 2)
        sum += max(a[x[i]] , a[x[i + 1]]) % min(a[x[i]] , a[x[i + 1]]);
    return sum;
}

void back(int k)
{
    if(suma(k) > mini) return ;
    else
    if(k >= n)
    {
        if (suma(k) < mini) mini = suma(k);
    }
    else
    {
        int xi = 1;
        while (xi <= n && p[xi] == 1)xi ++;
        x[++ k] = xi;
        p[xi] = 1;
        for (int i = xi + 1; i <= n; i ++)
        {
            if (p[i] == 0)
            {
                p[i] = 1;
                x[k + 1] = i;
                back(k + 1);
                p[i] = 0;
            }
        }
        p[xi] = 0;
    }
}

int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];
    sort(a + 1 , a + n + 1);
    back(0);
    cout << mini;
    return 0;
}