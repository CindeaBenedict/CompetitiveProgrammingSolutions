int oglindit(int n)
{
    int p=0;
    while(n)
        p=p*10+n%10, n/=10;
    return p;
}