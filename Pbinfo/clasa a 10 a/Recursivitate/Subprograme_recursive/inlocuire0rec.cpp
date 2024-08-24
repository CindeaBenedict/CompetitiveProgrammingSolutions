void num (int n, int v[])
{
    if (n==0) v[0]=0;
    else
    {
        if(v[n]<=v[0]) v[n]=0;
        num(n-1,v);
    }
}