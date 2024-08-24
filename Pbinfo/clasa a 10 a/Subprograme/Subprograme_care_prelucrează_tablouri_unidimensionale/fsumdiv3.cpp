int sum3(int a[] , int n)
{
    int s=0;
    for(int i = 0 ; i < n ; ++i)
    {
        if(a[i]%3==0)
            s+=a[i];
    }
    return s;
}