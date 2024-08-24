void num(int n, int a[]){
    for(int i = 1; i < n; ++i)
        if(a[i] <= a[0])
            a[i] = 0;
    a[0] = 0;
}