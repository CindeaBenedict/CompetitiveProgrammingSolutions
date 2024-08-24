long long SumProdRec(int n)
{
   if (n >= 2)
      return SumProdRec(n-1) + (n-1) * n;
   return 0;
}