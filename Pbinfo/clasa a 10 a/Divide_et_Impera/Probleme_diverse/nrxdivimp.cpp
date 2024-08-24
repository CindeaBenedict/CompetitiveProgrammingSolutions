int NrXDivImp(int a[], int st, int dr, int x)
{
   if (st == dr)
      return (a[st] == x);
   
   int mj = st+dr >> 1;
   return NrXDivImp(a, st, mj, x) + NrXDivImp(a, mj+1, dr, x);
}