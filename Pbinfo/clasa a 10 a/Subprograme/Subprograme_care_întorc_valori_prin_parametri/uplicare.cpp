void duplicare(int &n)
{
    int a[30] , p = 1;
    while(n)
    {
        a[p]=n%10;
        n/=10;
        p++;
    }
    p--;
    for(int i = p ; i >= 1 ; --i)
    {
        if(a[i] % 2 == 0)
            n = n * 10 + a[i] , n = n * 10 + a[i]/2;
        else
            n = n * 10 + a[i];
    }
}