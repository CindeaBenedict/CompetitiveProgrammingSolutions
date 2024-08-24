void Matrix(int a[300][300], int n, int L[], int C[], int k)
{   int j, i;
    for (i=0; i<k; i++)
    {
     for (j=0; j<n; j++)
      {
        if (a[L[i]][j]==0)
        a[L[i]][j]=1;
        else a[L[i]][j]=0;
        if (a[j][C[i]]==0)
        a[j][C[i]]=1;
        else a[j][C[i]]=0;
      }
    }
}