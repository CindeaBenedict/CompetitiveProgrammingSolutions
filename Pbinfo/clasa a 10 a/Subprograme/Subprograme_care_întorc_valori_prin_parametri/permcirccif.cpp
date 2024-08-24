void perm(int& n)
{
    int m=n, cnt=0,p=1,c=0;
    while (m)
    c=m%10, m/=10, cnt++;
    for (int i = 1; i <= cnt-1; ++i)
        p*=10;
    n%=p;
    n=n*10+c;
}