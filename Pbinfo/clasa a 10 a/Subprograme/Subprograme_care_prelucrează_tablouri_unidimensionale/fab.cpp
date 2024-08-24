void sort(int v[], int n)
{
   bool sortat;
   int i;

   do
   {
      sortat = true;
      for (i = 1; i < n; ++i)
         if (v[i-1] > v[i])
         {
            swap(v[i-1], v[i]);
            sortat = false;
         }
   } while (!sortat);
}

int FAB(int a[], int n, int b[], int m)
{
   sort(a, n);

   int j, x, y;
   bool ok;
   for (j = 0; j < m; ++j)
   {
      ok = false;
      x = 0;  y = n-1;
      while (x < y && !ok)
      {
         while (a[x] + a[y] > b[j])
            y--;
         if (a[x] + a[y] == b[j] && x < y)
            ok = true;
         while (a[x] + a[y] < b[j])
            x++;
         if (a[x] + a[y] == b[j] && x < y)
            ok = true;
      }

      if (!ok)
         return 0;
   }

   return 1;
}