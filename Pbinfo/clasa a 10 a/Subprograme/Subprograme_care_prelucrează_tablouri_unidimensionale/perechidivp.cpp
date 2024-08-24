map<int,int>m;
long long PerechiDivP(int a[], int n, int P){

    long long rez = 0;
    for(int i = 0 ; i < n ; ++i){

        int rest = a[i] % P;

        if(rest == 0)
            rez += m[0];
        else
            rez += m[P - rest];

        m[rest]++;
    }
    return rez;
}