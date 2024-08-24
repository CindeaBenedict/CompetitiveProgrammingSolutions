#include <bits/stdc++.h>
int suma(int a[] , int n , int m)
{
    sort(a , a+n);
    int s=0;
    for(int i = 0 ; m ; ++i)
    {
        s+=a[i];
        m--;
    }
    return s;
}