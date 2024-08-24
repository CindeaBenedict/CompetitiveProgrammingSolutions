int Fibo(int n)
{
    int a,b;
    a=b=1;
    int cnt=2;
    for(int i=1;cnt<n;++i)
    {
        int sum=a+b;
        a=b , b=sum;
        if(b%2==1)
            cnt++;
    }
    return b;
}