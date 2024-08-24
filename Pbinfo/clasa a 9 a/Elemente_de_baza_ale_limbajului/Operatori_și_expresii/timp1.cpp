#include <iostream>
using namespace std;
int main() 
{
  int h, m, x, y;
  cin >> h >> m >> x >> y;
  h = h + x + ((y + m) / 60);
  m = (m + y) - (((y + m) / 60) * 60);
  if (h > 23)
  h = h - 24 * (h / 24);
  cout << h  << " "<< m << endl;
  return 0;
}