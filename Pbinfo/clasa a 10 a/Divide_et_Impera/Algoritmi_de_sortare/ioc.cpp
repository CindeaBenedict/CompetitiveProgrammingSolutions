#include <iostream>
#include <fstream>
#include <algorithm>
#include<climits>
#include<cstdlib>
using namespace std;

ifstream f("cioc.in");
ofstream g("cioc.out");

long long arr[100001], s[100001];

int main()
{
    int c, n, k;
    f >> c >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        f >> arr[i];
        s[i] = arr[i];   // fac o copie a vectorului
    }
    sort(arr + 1, arr + n + 1);   //sortez vectorul initial
    int i = k;
    while (arr[i] == arr[i + 1])      //aflu cate elemente sunt egale cu al k-lea cel mai mic element
        i++;
    if (c == 1)
        g << i;
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            g << s[i] << " ";
            if (s[i] <= arr[k])
                g << 2 * s[i] << " ";    // afisez in plus dublul elementului mai mic sau egal decat arr[k]
        }
    }
    return 0;
}