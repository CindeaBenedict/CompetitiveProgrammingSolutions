bool PalRec(int a[], int st, int dr)
{
   if (st >= dr)
      return true;
   return ((a[st] == a[dr]) && PalRec(a, st+1, dr-1));
}