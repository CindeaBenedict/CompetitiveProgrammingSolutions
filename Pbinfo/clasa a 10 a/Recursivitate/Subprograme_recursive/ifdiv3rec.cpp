int CifDiv3Rec(int x)
{
   if (x <= 9)
      return (x % 3 == 0);
   
   return (x%10 % 3 == 0) + CifDiv3Rec(x/10);
}