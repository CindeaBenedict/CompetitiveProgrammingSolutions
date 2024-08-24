long long int NextNumber(long long int n)
{
    int a[100] = {0} , nc = 0;
    long long int x = n;
    while(x)
    {
        a[++nc]=x%2;
        x/=2;
    }
    int cnt0=0 , cnt1=0 , i = 1;
    while(!a[i])
        i++ , cnt0++;
    while(a[i])
        i++ , cnt1++;
    if(i > nc)
        nc++;
    cnt0++;
    a[i]=1;
    int j = i - 1;
    for(int d = 1 ; d <= cnt0 ; d++ , j--)
        a[j]=0;
    for(int c = 1 ; c < cnt1 ; c++ , j--)
        a[j]=1;
    long long int p = 1;
    for(i = 1 ; i <= nc ; ++i)
        {
            x = x + a[i] * p;
            p*=2;
        }
    return x;
}