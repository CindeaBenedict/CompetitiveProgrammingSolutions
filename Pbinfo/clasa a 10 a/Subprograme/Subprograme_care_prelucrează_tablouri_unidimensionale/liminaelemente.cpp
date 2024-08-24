int EliminaElemente(int a[], int n, int m)
{   
    // a pus dan limitele gresit,valorile sunt pana la 100000
    const int VMAX = 1e5 + 1;
    vector<int> vf(VMAX,0);

    vector<int> v;
    for(int i = 0 ; i < n ; i++)
    {
        vf[a[i]]++;
    }

    for(int i = 0; i <= VMAX ; i++)
    {
        if(vf[i] == 0)
            continue;
        v.push_back(vf[i]);
    }

    sort(v.begin(),v.end());
    int suma = 0,ans = v.size();
    n = v.size();
    for(int i = 0; i < n ; i++)
    {
        suma += v[i];
        if(m >= suma)
        {
            ans = n - i - 1;
            
        }
    }
    
    return ans;//superpeace

}