#include <algorithm>
void ordonare(int a[] , int n)
{
    sort(a , a+n);
    reverse(a,a+n);
}