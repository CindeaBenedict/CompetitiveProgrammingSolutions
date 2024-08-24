void afisare(int a , int b)
{
    if(b<a)
    {
    int c=a;
    a=b;
    b=c;
    }
    for(int i = a ; i <= b ; ++i)
    {
        if(i%2==0)
        cout << i << " ";
    }
}