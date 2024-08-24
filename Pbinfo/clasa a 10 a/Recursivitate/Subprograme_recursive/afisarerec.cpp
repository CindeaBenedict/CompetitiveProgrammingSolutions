void afis()
{
    int a[100000];
    int n=0;
    for(int i = 0 ; ; i++)
    {
        cin >> a[i];
        n++;
        if(a[i]==0)
            break;
    }
    for(int i = n-1 ; i >= 0 ; --i)
        cout << a[i] << ' ';
}