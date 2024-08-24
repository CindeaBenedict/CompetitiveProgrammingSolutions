void afisvec(int a[] , int n)
{
    if(n > 0)
    {
        cout << a[n-1] << ' ';
        afisvec(a,n-1);
    }
}