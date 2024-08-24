void Insert(int a[], int &n){
    int cnt = 0;
    for(int i = 0; i < n; ++i)
        if(a[i] % 2 == 1)
            cnt++;

    for(int i = n + cnt - 1, j = n - 1; i >= 0, j >= 0; --i, --j){
        if(a[j] % 2 == 1){
            a[i] = a[j] * 2;
            a[i-1] = a[j];
            i--;
        }
        else
            a[i] = a[j];
    }
    /*
        5
        1 2 3 4 5
        cnt = 3;
        i = 8, j = 5;
        daca a[j] este impar -> 5 10 i--;
        i--, j--;
        i = 6, j = 4;
        daca a[j] este par -> il pun pe 4 normal in sir, la pozitia i = 6;
        i--, j--;
        i = 5, j = 3;
        daca a[j] este impar -> 3 6 i--;
        i--, j--; 1 2 3 3 6 4 5 10
        i = 3, j = 2;
        daca a[j] este par -> il pun pe 2 normal in sir, la pozitia i = 3;
        i--, j--;
        i = 2, j = 1;
        daca a[j] este impar -> 1 2 i--;
        i--, j--;
        i = j = 0;
        1 2 2 3 6 4 5 10
    */

    n += cnt;

}