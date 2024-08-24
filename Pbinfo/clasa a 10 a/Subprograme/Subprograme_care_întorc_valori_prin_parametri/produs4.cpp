void produs(int a , int &k)
{
    int p = 1;
    int i = 1;
    for( ; p <= a ; i+=2)
        p*=i;
    k=i-4;
}