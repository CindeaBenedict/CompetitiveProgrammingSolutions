void dublare1(int&n)
{
    int aux=n,zeci=1;
    while(n>10)
    {
        n/=10;
        zeci*=10;
    }
    n=n*10*zeci+aux;
}