int PermD(int a[], int n)
{
    long long int s1 = 0;
    for(int i = 1 ; i <= n ; ++i)
        s1+=a[i];
    return s1-(1LL * n * (n - 1) / 2);
}