#include <bits/stdc++.h>

int main() {
 long long int n, tmp = -1, ct = 0;
 while (tmp != 0) {
  std::cin >> tmp;
  if (abs(tmp) % 2 == 0)
   ct++;
 }
 if (ct == 1)
  std::cout << "NU EXISTA";
 else
  std::cout << ct - 1;
 return 0;

}