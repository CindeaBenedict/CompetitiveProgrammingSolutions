int P(int x[] , int n , int& sum)
{
    sum=0;
    for(int i = 0 ; i < n ; ++i)
    {
        int cnt=1;
        int d=2;
        int c=x[i];
        while(x[i]>1)
        {
            int p = 0;
            while(x[i]%d==0)
                x[i]/=d , p++;
            if(p>0)
                cnt*=(p+1);
            d++;
            if(d*d>x[i])
                d=x[i];
        }
        if(cnt==2)
            sum+=c;
    }
}