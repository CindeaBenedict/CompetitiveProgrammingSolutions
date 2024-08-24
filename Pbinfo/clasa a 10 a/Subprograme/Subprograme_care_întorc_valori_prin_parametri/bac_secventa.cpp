void secventa(int&n)
{
    int v[12]={0},cnt=1;
    while(n)
    {
        v[cnt]=n%10;
        n/=10;
        cnt++;
    }
    cnt--,n=v[cnt];
    for(int i=cnt;i>=2;i--)
       {
         if(v[i]==2 && v[i-1]==2) v[i-1]=0;  
         n=n*10+v[i-1];
       }  
}