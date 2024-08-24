int sumfactcif(int n)
{
    int s = 0;
    if (n==0) return 1;
    else {
    while (n != 0)
    {
        if(n % 10 == 0) s =s + 1;
        else
        {
            int p=1;
            for(int i=1;i<=n%10;i++)
            p =p * i;
            s=s+p;
        }
        n=n/10;
    }
    return s;
    }
}