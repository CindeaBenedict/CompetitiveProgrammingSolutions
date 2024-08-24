bool TreiCifImp(int n)
{
    bool ok=false;
    int l=0;
    while(n)
    {
        if(n%2==1)
            l++;
        else
            l=0;
        if(l>=3)
            ok=true;
        n=n/10;
    }
    return ok;
}