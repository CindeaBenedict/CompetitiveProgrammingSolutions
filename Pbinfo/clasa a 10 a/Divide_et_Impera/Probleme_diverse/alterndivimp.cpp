bool AlternDivImp(int a[], int st, int dr)
{
   if (st == dr)
      return true;
   
   int mj = st+dr >> 1;
   return (AlternDivImp(a, st, mj) && AlternDivImp(a, mj+1, dr) && (a[mj] % 2 != a[mj+1] % 2));
}