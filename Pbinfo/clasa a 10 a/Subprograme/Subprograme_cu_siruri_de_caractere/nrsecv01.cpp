#include <cstring>

long long NrSecv01(const char s[])
{
   s--;
   int n = strlen(s+1);
   int st[n+1], dr[n+2];

   st[0] = 0;
   for (int i = 1; i <= n; ++i)
      if (s[i] == '1')  st[i] = i;
      else  st[i] = st[i-1];
   
   dr[n+1] = n+1;
   for (int i = n; i >= 1; --i)
      if (s[i] == '1')  dr[i] = i;
      else  dr[i] = dr[i+1];
   
   long long secv = 0;
   for (int i = 1; i <= n; ++i)
      if (s[i] == '1')
         secv += 1LL * (i - st[i-1]) * (dr[i+1] - i);
   
   return secv;
}