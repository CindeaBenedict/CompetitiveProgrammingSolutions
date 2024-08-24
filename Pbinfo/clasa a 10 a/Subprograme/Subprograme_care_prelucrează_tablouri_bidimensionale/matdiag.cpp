int MatDiag(int a[100][100], int n)
{
   bool ok = 1;

   for (int i = 0; i < n; ++i)
      for (int k = 0; i+k < n; ++k)
         if (a[i+k][k] != a[i][0] || a[k][i+k] != a[0][i])
            ok = 0;
   
   return ok;
}