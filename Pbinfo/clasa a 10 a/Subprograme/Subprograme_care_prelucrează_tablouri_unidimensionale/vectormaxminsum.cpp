void P(int a[], int n, int& mini, int& maxi, int& sum){
    mini = a[0];
    maxi = a[0];
    sum = a[0];
    for(int i = 1; i < n; ++i){
        sum += a[i];
        if(a[i] > maxi)
            maxi = a[i];
        if(a[i] < mini)
            mini = a[i];
    }
}