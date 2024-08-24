#include <iostream>
using namespace std;

void citire(int v[], int &n)
{
   cin >> n;
   for (int i = 0; i < n; ++i)
      cin >> v[i];
}

void afisare(int v[], int n)
{
   for (int i = 0; i < n; ++i)
      cout << v[i] << ' ';
}

void descompPuteri(int x, int rez[], int &n)
{
   int d;
   rez[0] = rez[1] = 0;
   for (d = 2; d*d <= x; ++d)
   {
      rez[d] = 0;
      while (x % d == 0)
      {
         x /= d;
         rez[d] = 1;
      }
   }

   if (x != 1)
   {
      for (; d < x; ++d)
         rez[d] = 0;
      rez[x] = 1;
      n = x+1;
   }
   else
      n = d;
}

int putereaIntai(int exp, int nr)
{
   if (nr % exp == 0 && nr / exp % exp != 0) // nr % (exp) == 0,  nr % (exp^2) != 0
      return 1;
   return 0;
}

void sort(int v[], int n)
{
   int sortat, i;

   do
   {
      sortat = 1;
      for (i = 1; i < n; ++i)
         if (v[i - 1] > v[i])
         {
            swap(v[i - 1], v[i]);
            sortat = 0;
         }
   } while (sortat == 0);
}

void stergeElem(int v[], int &n, int pos)
{
   for (; pos < n-1; ++pos)
      v[pos] = v[pos + 1];

   n--;
}

void stergeDuplic(int v[], int &n)
{
   int i;
   for (i = 1; i < n; ++i)
      if (v[i - 1] == v[i])
      {
         stergeElem(v, n, i);
         i--;
      }
}

void constrY(int X[], int Xn, int Y[], int &Yn)
{
   int desc[1000], descn, i, j, YK = 0;
   for (i = 0; i < Xn; ++i)
   {
      descompPuteri(X[i], desc, descn);
      for (j = 2; j < descn; ++j)
         if (desc[j] == 1)
            if (putereaIntai(j, X[i]))
               Y[YK++] = j;
   }
   Yn = YK;

   sort(Y, Yn);
   stergeDuplic(Y, Yn);
}

int main()
{
   int X[1000], Xn;
   int Y[1000], Yn;
   citire(X, Xn);
   constrY(X, Xn, Y, Yn);

   if (Yn == 0)
      cout << "Sirul Y este vid.";
   else
      afisare(Y, Yn);
   return 0;
}