#include <cmath>
int MaxMinDif1(int a[], int n)
{
   sort(a, a + n);

   int i = 0, j, k;
   for (j = 0; j < n && a[i] == a[j]; ++j);
   for (k = j; k < n && a[j] == a[k]; ++k);

   int ans = 0;
   if (abs(a[i] - a[j]) == 1)
      ans = k-i;
   
   while (k != n)
   {
      i = j;
      j = k;
      for (; k < n && a[j] == a[k]; ++k);
      if (abs(a[j] - a[i]) == 1)
         ans = max(ans, k-i);
   }

   return ans;
}