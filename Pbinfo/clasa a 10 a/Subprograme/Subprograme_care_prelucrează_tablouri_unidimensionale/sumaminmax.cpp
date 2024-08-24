int* sumaMinMax(int v[], int n)
{
   int* rez = new int[2];
   int s = 0, i, min = v[0], max = v[0];

   for (i = 0; i < n; ++i)
   {
      if (v[i] > max)
         max = v[i];
      if (v[i] < min)
         min = v[i];
      s += v[i];
   }

   rez[0] = s - max;
   rez[1] = s - min;

   return rez;
}