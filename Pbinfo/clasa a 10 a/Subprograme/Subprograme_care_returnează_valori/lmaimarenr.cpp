int cmmnr(int n){

    int a[100], aux=0;
    while(n){
        a[++aux]=n%10;
        n/=10;
    }

    for(int i=1;i<aux;i++)
        for(int j=i+1;j<=aux;j++)
            if(a[i]<a[j])
                swap(a[i],a[j]);

    for(int i=1;i<=aux;i++)
        n=n*10+a[i];

    return n;

}