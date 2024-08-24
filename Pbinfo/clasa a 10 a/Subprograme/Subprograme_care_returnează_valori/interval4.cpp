bool prim(int n)
{
    int cnt=0;
    for(int d=1;d*d<=n;++d)
    {
        if(n%d==0)
            cnt+=2;
        if(d*d==n)
            cnt--;
    }
    if(cnt==2)
        return 1;
    return 0;
}

int interval(int n)
{
    for(int i=n;1;++i)
    {
        if(prim(i))
            return i+1;
    }
}