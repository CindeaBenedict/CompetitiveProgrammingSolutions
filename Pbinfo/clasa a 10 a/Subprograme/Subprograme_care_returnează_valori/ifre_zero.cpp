int nr_cif_zero(int n)
{
    int cnt=0;
    int m=n;
    while(n)
    {
        if(n%10==0)
            cnt++;
        n/=10;
    }
    if (m==0)
    return 1;
    else
    return cnt;
}