int count(double a[], int n){
    int cnt=0;
    double sum=0;
    double avg=0;
    for(int i=0;i<n;i++)
        sum=sum+a[i];
    avg=sum/n;
     for(int i=0;i<n;i++)
         if(a[i]>=avg)
            cnt++;
    return cnt;
}