int sum3(int v[101], int n)
{
    int s=0;
    for (int i=0 ; i < n ; ++i)
    {
        cin >> v[i];
        if (v[i]%3==0)
            s+=v[i];
    }
    return s;
}