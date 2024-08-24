#include <bits/stdc++.h>
int numar(int n , int a[] , int& k)
{
    sort(a , a+n);
    int b=a[0];
    int cnt=1;
    while(b)
    {
        cnt*=10;
        b/=10;
    }
    k=a[n-1]*cnt+a[0];
}