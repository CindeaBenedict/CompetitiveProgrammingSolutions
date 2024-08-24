int CautaPoz(int a[], int n)
{
   vector<int> s(n, 0);
   s[0] = a[0];
   for (int i = 1; i < n; ++i)
      s[i] = s[i-1] + a[i];
   
   int dif = INT_MAX, p;
   for (int i = 0; i < n-1; ++i)
      if (abs(s[n-1] - 2*s[i]) < dif)
      {
         dif = abs(s[n-1] - 2*s[i]);
         p = i;
      }
   
   return p;
}