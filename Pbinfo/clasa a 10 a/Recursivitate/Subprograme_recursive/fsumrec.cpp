int suma(int a[] , int n)
{
    if(n==0) return 0;
    else return suma(a , n-1) + a[n-1];
}