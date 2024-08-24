void sub(int n, int v[], int x){
    int a[61], ind = 0;
    for(int i = 0; i < n; ++i)
        if(v[i] == x)
            a[++ind] = x;
    for(int i = 0; i < n; ++i)
        if(v[i] != x)
            a[++ind] = v[i];
    for(int i = 1; i <= ind; ++i)
        v[i-1] = a[i];
}