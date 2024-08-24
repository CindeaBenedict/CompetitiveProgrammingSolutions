bool ExistaImpareRec(int n)
{
   if (n < 10)
      return (n%10 % 2 == 1);
   return (n%10 % 2 == 1 || ExistaImpareRec(n/10));
}