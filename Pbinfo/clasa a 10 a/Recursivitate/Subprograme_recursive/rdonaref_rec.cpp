void ordonare(int a[] , int n)
{
    for(int i = 1 ; i < n ; ++i)
    {
        if(a[i]<a[i-1])
            swap(a[i],a[i-1]);
        
    }
    if(n > 0)
        ordonare(a , n - 1);
}