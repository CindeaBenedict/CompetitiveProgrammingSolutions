int SecvSumS(vector<int> &a, int s)
{
   int n = a.size();
   int lungmin = INT_MAX;

   // sume partiale de la dreapta la stanga
   vector<long long> sp(n + 1, 0);
   for (int i = n-1; i >= 0; --i)
      sp[i] = sp[i+1] + a[i];
   
   unordered_map<long long, int> sp_poz; // sp_poz[f] = ultima pozitie pe care se afla suma f
   
   set<long long> s_ant; // sume partiale anterioare
   for (int i = 0; i < n; ++i) // cautam secventa minima care se termina in elementul i
   {
      s_ant.insert(sp[i]);
      sp_poz[sp[i]] = i;

      set<long long>::iterator left = s_ant.lower_bound(s + sp[i+1]);
      if (*left == s + sp[i+1])
         lungmin = min(lungmin, i - sp_poz[*left] + 1);
   }

   return (lungmin == INT_MAX ? -1 : lungmin);
}