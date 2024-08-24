int cifreImpare(int n)
{
    int a[11] , p = 1;
    int cn = n;
    while(n)
    {
        a[p]=n%10;
        n/=10;
        p++;
    }
    p--;
    int nr = 0;
    for(int i = p ; i >= 1 ; --i)
        if(a[i]%2==0)
        nr = nr * 10 + a[i];
    if(nr == 0 || nr == cn)
        return -1;
    return nr;
}