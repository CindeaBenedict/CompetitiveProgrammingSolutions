bool prim(int x)
{
   if (x <= 1)
      return false;
   
   for (int d = 2; d*d <= x; ++d)
      if (x % d == 0)
         return false;
   return true;
}

void P(int x[], int n, int& s)
{
   int i;
   
   s = 0;
   for (i = 0; i < n; ++i)
      if (prim(x[i]))
         s += x[i];
}