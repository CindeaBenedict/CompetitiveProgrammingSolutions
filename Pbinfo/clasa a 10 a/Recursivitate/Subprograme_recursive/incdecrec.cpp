int IncDecRec(int n)
{
    int vec[10];
    int p = 0;
    if(n == 0)
        vec[0]=0 , p++;
    while(n)
    {
        vec[p]=n%10;
        p++;
        n/=10;
    }
    for(int i = 0 ; i < p ; ++i)
        if(vec[i]%2==0)
            vec[i]++;
        else
            vec[i]--;
    int val = 0;
    for(int i = p-1 ; i >= 0 ; --i)
        val = val * 10 + vec[i];
    return val;
}