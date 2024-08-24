#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

inline long double f(long double x)
{
    return sin(x) + sin(2 * x) + x;
}

int main(void)
{
    long double y, eps = 1e-8, left = 0, right = 1, mid;

    cout << fixed << setprecision(8);

    cin >> y;

    while(left < right) {
        mid = (left + right) / 2.0;

        if(f(mid) < y && f(mid + eps) < y)
            left = mid + eps;
        else if(f(mid) > y && (!mid || f(mid - eps) > y))
            right = mid - eps;
        else {
            double o = f(mid - (mid ? eps : 0)),
               t = f(mid),
               th = f(mid + eps);

            if(abs(th - y) < abs(t - y))
                cout << mid + eps;
            else if(o != t && abs(o - y) < abs(t - y))
                cout << mid - eps;
            else
                cout << mid;
            break;
        }
    }

    return 0;
}