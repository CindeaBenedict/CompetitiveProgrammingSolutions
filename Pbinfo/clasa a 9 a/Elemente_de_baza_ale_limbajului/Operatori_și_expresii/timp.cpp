#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int h, m, x;
  cin >> h >> m >> x;
  h = h + ((x + m) / 60);
  m = (m + x) - (((x + m) / 60) * 60);
  if (h > 23)
  h = h - 24 * (h / 24);
  cout << h  << " "<< m << endl;
  return 0;
}