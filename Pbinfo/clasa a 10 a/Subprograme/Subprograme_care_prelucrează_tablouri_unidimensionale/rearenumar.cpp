int F(int n , int a[] , int& k)
{
    k=0;
    int ok=0;
    for(int i = 0 ; i < n ; ++i)
    {
        if(a[i]%2==0)
        {
            ok++;
            k=k*10+a[i];
        }
    }
    if(ok==0)
        k=-1;
}