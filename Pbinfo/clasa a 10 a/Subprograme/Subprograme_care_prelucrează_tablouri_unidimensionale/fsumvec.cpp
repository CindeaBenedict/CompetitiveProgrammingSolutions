int suma(int a[] , int n , int x , int y)
{
    int s=0;
    for(int i = 1 ; i <= n ; ++i)
    {
        if(i < x || i > y)
            s+=a[i];
    }
    return s;
}