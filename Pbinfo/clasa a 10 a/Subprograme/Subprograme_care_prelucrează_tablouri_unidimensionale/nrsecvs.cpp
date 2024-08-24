long long NrSecvS(int a[], int n, int S)
{
   int i, j;  long long Scurent = 0;
   long long secvente = 0;
   
   i = 1;  j = 1;
   while (i <= n)
   {
      while (j <= n && Scurent + a[j] <= S)
         Scurent += a[j++];
      // in [i, j-1] nu sunt secvente. in [i, j+k], k intreg >= 0, toate secventele sunt valide
      secvente += n-j+1;
      Scurent -= a[i++];
   }

   return secvente;
}