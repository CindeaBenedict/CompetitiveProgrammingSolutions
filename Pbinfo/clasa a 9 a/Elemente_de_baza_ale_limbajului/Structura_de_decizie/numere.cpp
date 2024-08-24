#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int maxi1 = 0;
    if(a >= b && a >= c && a >= d && a >= e)
        maxi1 = a, a = 0;
    else if(b >= a && b >= c && b >= d && b >= e)
        maxi1 = b, b = 0;
    else if(c >= a && c >= b && c >= d && c >= e)
        maxi1 = c, c = 0;
    else if(d >= a && d >= b && d >= c && d >= e)
        maxi1 = d, d = 0;
    else
        maxi1 = e, e = 0;

    int maxi2 = 0;
    if(a >= b && a >= c && a >= d && a >= e)
        maxi2 = a, a = 0;
    else if(b >= a && b >= c && b >= d && b >= e)
        maxi2 = b, b = 0;
    else if(c >= a && c >= b && c >= d && c >= e)
        maxi2 = c, c = 0;
    else if(d >= a && d >= b && d >= c && d >= e)
        maxi2 = d, d = 0;
    else
        maxi2 = e, e = 0;

    int maxi3 = 0;
    if(a >= b && a >= c && a >= d && a >= e)
        maxi3 = a, a = 0;
    else if(b >= a && b >= c && b >= d && b >= e)
        maxi3 = b, b = 0;
    else if(c >= a && c >= b && c >= d && c >= e)
        maxi3 = c, c = 0;
    else if(d >= a && d >= b && d >= c && d >= e)
        maxi3 = d, d = 0;
    else
        maxi3 = e, e = 0;

    cout << maxi1 + maxi2 + maxi3;

    return 0;
}