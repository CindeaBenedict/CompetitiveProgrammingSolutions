void Impare(int& n)
{
    int v[11]={0};
    int cnt=1;
    while(n)
    {
        v[cnt]=n%10;
        cnt++;
        n/=10;
    }
    cnt--;
    for(int i=cnt;i>=1;i--)
        if(v[i]%2) n=n*10+v[i]-1;
        else n=n*10+v[i];
}