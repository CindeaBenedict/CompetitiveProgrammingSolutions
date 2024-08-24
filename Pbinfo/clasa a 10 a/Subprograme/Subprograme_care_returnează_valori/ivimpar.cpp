int DivImpar(int a , int b)
{
    while(b)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    if(a%2==1)
        return a;
    else
    {
        int max=0;
        for(int d=1;d*d<=a;++d)
        {
            if(a%d==0)
            {
                if(d>=max && d%2==1)
                    max=d;
                if(a/d>=max && (a/d)%2==1)
                    max=a/d;
            }
        }
        return max;
    }
}