int sub(int n, int v[], int k)
{
   int i, p, sum;

   sum = 0;
   p = 0;
   for (i = 0; i < n; ++i)
      if (p < k && v[i] % 2 == 1)
      {
         sum += v[i];
         p++;
      }

   if (p < k) // nu sunt destule numere impare
      return -1;
   return sum;
}