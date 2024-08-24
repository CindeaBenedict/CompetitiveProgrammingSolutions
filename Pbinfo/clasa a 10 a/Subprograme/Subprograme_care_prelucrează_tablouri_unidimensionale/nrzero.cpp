int NrZero(int a[], int n)
{
   int pos_first_par = -1, pos_next_par_diferit = -1;

   int st = 1, dr = n;
   while (st <= dr)
   {
      int mj = st+dr >> 1;

      if (a[mj] % 2 == 0)
      {
         pos_first_par = mj;
         dr = mj-1;
      }
      else
         st = mj+1;
   }

   if (pos_first_par == -1)
      return 0;
   if (a[pos_first_par] != 0)
      return 0;

   st = pos_first_par+1;   dr = n;
   while (st <= dr)
   {
      int mj = st+dr >> 1;

      if (a[mj] != a[pos_first_par])
      {
         pos_next_par_diferit = mj;
         dr = mj-1;
      }
      else
         st = mj+1;
   }
   if (pos_next_par_diferit == -1)
      return n-pos_first_par + 1;
   return pos_next_par_diferit-pos_first_par;
}