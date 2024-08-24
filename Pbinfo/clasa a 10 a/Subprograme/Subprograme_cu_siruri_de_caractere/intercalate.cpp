#include <cstring>

void Intercalate(char a[], char b[], char c[])
{
   int i = 0, j = 0;
   int n = strlen(a);
   int m = strlen(b);
   for (; i < n && j < m; ++i, ++j)
   {
      c[i+j] = a[i];
      c[i+j+1] = b[j];
   }

   for (; i < n; ++i)
      c[i+j] = a[i];
   for (; j < m; ++j)
      c[i+j] = b[j];
   
   c[i+j] = 0;
}