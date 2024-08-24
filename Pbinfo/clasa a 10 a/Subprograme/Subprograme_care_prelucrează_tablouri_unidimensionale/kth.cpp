int Kth(int a[], int n, int x, int k){
    if(k == 0)
        return -1;
    int cnt = 0;
    for(int i = 0; i < n; ++i)
        if(a[i] == x)
            cnt++;
    if(cnt >= k){
        int poz = 0;
        for(int i = 0; i < n; ++i)
            if(a[i] == x){
                k--;
                if(k == 0)
                    poz = i;
            }
        return poz;
    }
    return -1;
}