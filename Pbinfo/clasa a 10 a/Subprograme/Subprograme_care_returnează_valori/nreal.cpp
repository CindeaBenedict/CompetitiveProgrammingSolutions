double nreal(int n,int m)
{
    int s=m;
    int p=1;
    while(s)
        p*=10, s/=10;
    double f;
    f=p*n+m;
    f=(double) f/p;
    return f;
}