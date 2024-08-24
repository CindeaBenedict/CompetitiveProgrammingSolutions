int numarare(int v[100], int n)
{
    int cnt=0;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        if (v[i]==v[i-1])
        cnt++;
    }
    return cnt;
}