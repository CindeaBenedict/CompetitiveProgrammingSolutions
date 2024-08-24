int Egalitate(int a[], int n) {
    int maxi = -1, fr[10001];
    for(int i = 0; i < n; ++i) {
        fr[a[i]]++;
        if(a[i] > maxi)
            maxi = a[i];
    }
    int mini = 99999;
    for(int i = 0; i <= maxi; ++i) {
        int s = 0;
        int x = fr[i];
        if(x != 0) {
            for(int i = 0; i <= maxi; ++i) 
                if(fr[i] > x)
                    s += (fr[i] - x);
                else if(fr[i] < x)
                    s += fr[i];
            
            if(s < mini)
                mini = s;
        }
    }
    return mini;
}
