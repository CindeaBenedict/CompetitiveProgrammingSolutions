#include <algorithm>
void ordonare(int a[], int n, int st, int dr)
{
    for(auto i = st; i <= dr; i++)
        for(auto j = i + 1; j <= dr; j++)
            if(a[i] > a[j])
                swap(a[i], a[j]);
}