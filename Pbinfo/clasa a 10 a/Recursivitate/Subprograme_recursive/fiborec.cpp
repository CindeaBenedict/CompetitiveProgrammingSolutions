bool FiboRec(int x, int y)
{
   if (x == 1 && y == 1)
      return true;
   if (x < 0)
      return false;
   return FiboRec(y-x, x);
}