void Succesor(int a[],int n,int k)
{
    short int F[30001];
    for(int i=1;i<=k;++i)
        F[a[i]]=1;
    int j;
    for(int i=k;i>=1;--i)
        if(F[a[i]+1]==0&&a[i]<n)
        {
            j=i;
            break;
        }
    int A=a[j];
    for(int i=j;i<=k;++i)
                a[i]=++A;
}