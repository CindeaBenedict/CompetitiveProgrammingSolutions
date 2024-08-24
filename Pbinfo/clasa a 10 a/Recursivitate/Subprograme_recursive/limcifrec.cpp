int elimcif (int n, int c)
{
    if (n<=9)
    {
        if (n==c) return 0;
        else return n;
    }
    if (n%10 != c) return elimcif(n/10,c)*10 + n%10;
    else return elimcif(n/10,c);
}