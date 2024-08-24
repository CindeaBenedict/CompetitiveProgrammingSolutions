int nr_sa(int a[][100], int n, int m){
    int minlin[100], maxlin[100], mincol[100], maxcol[100];
    for(int i = 0; i < n; ++i){
        int mini = 2000000001;
        int maxi = 0;
        for(int j = 0; j < m; ++j){
            if(a[i][j] < mini)
                mini = a[i][j];
            if(a[i][j] > maxi)
                maxi = a[i][j];
        }
        minlin[i] = mini;
        maxlin[i] = maxi;
    }
    for(int j = 0; j < m; ++j){
        int mini = 2000000001;
        int maxi = 0;
        for(int i = 0; i < n; ++i){
            if(a[i][j] < mini)
                mini = a[i][j];
            if(a[i][j] > maxi)
                maxi = a[i][j];
        }
        maxcol[j] = maxi;
        mincol[j] = mini;
    }
    int cnt = 0;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            if((a[i][j] == maxlin[i] && a[i][j] == mincol[j]) ||
               (a[i][j] == minlin[i] && a[i][j] == maxcol[j]))
                cnt++;
    return cnt;
}