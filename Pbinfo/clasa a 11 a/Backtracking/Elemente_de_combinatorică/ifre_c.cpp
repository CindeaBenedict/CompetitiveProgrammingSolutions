#include <iostream>
#include <algorithm>
using namespace std;

int n , m , x[30] , cnt , p[30] , c , a[30];

void afisare()
{
    for(int i = 1 ; i <= c ; i++)
        cout << a[x[i]];
    cout << '\n';
}
void back(int k)
{
    for(int i = cnt; i >= x[k - 1] + 1 ; i--)
    {
        x[k] = i;
        if(k == 1 && a[i] == 0);
        else
        {
            if(k == c) afisare();
            else back(k + 1);
        }
    }
}

int main()
{
    cin >> n >> c;
    while(n != 0)
    {
        a[++cnt] = n % 10;
        n /= 10;
    }
    sort(a + 1 , a + cnt + 1);
    back(1);
    return 0;
}