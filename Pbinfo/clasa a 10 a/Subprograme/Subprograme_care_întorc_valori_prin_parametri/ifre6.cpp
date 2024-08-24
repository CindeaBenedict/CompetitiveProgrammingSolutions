void numar(int n , int k , int &nr)
{
    int f[11]={0};
    int cn = n;
    nr=0;
    while(cn)
    {
        f[cn%10]++;
        cn/=10;
    }
    for(int i = 9 ; i >= 0 ; --i)
    {
        for(int j = 1 ; j <= f[i] && k ; ++j , k--)
            nr = nr * 10 + i;
    }
}