int det(int n)
{
    int a[11];
    int cnt, cnt2;
    a[1]=1;
    for(int i=2;i<=11;++i)
    {
        a[i]=a[i-1]*i;      
    }
    for(int i=1;a[i]<=n;++i)
    {
        cnt=a[i];
        cnt2=a[i+1];
    }
    if(n-cnt>cnt2-n)
        return cnt2;
    else
        return cnt;
}