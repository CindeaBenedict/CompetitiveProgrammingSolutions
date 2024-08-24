#ifdef EZ
   #include "./ez/ez.h"
#else
   #include <bits/stdc++.h>
#endif
#define mp make_pair
#define mt make_tuple
#define ll long long
#define pb emplace_back
#define fi first
#define se second
using namespace std;

const int nMAX = 100e3;

struct alex {
   int val, idx, norm;
};

int n;
alex v[nMAX + 1];

int main()
{
   cin.tie(0)->sync_with_stdio(0);
   
   cin >> n;
   for (int i = 1; i <= n; ++i)
   {
      cin >> v[i].val;
      v[i].idx = i;
   }
   
   sort(v + 1, v + n+1, [](const alex &a, const alex &b) {
      return a.val < b.val;
   });
   int k = 0;
   v[1].norm = ++k;
   for (int i = 2; i <= n; ++i)
      if (v[i-1].val == v[i].val)
         v[i].norm = k;
      else
         v[i].norm = ++k;
   
   sort(v + 1, v + n+1, [](const alex &a, const alex &b) {
      return a.idx < b.idx;
   });

   for (int i = 1; i <= n; ++i)
      cout << v[i].norm << ' ';
}