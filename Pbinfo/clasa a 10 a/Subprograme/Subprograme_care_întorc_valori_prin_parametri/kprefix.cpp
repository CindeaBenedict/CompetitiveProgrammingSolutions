void prefix(int n, int k, int& x) {int p=1,i;
    for (i=1;i<=k;i++)
        p=p*10;
    while(n>=p){
        n=n/10;}
    x=n;}