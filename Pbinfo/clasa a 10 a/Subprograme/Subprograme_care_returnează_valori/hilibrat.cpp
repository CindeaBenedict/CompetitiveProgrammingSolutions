bool echilibrat(int n)
{
    int a=0,b=0;
    int cnt=0;
    while(n)
    {
        if(cnt%2==0)
            a+=n%10;
        else
            b+=n%10;
        n/=10;
        cnt++;
    }
    if(a%2==0 && b%2==1)
        return 1;
    return 0;
}