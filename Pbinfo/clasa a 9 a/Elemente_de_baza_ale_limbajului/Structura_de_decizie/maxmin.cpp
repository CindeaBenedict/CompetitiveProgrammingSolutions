#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
  int minim = 200000000;
  int maxim = -2000000000;
  cin >> a >> b >> c;

  minim = a;
  if ( b < minim ) minim = b;
  if ( c < minim ) minim = c;
  maxim = a;
  if ( b > maxim ) maxim = b;
  if ( c > maxim ) maxim = c;
  cout << maxim - minim;
    return 0;
}
