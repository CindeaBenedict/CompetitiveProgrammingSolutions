void F(int n, int a[], int &k)
{
    if(n == 0)
        k = -1;
    else
    {
        F(n-1,a,k);
        if(a[n-1]%2 == 0)
        {
            if(k == -1)
                k  = 0;
            k = k*10+a[n-1];
        }
    }
}
