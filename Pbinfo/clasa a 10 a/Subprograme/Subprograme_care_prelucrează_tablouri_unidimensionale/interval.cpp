int interval(int a[], int n){
    int mini = a[0];
    int maxi = a[n-1];
    if(mini > maxi)
        swap(mini, maxi);
    int cnt = 0;
    for(int i = 0; i < n; ++i)
        if(a[i] >= mini && a[i] <= maxi)
            cnt++;
    return cnt;
}