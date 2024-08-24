int DistMin(int a[], int n, int x, int y)
{
    int mini=9999999,p=0,k=0,v[10001],f[10001];
    for(int i=0;i<=n;i++)
    {
        if(a[i]==x)
        {
            v[k]=i;
            k++;
        }
        else if(a[i]==y)
        {
            f[p]=i;
            p++;
        }
    }
    k--;
    p--;
    for(int i=0;i<=k;i++)
    {
        for(int j=0;j<=p;j++)
            if(abs(v[i]-f[j])<mini)
            mini=abs(v[i]-f[j]);
    }
    return mini;
}