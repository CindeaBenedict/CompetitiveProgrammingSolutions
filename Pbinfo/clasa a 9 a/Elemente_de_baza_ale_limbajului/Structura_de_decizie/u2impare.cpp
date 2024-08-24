#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a; 
    cin >> a;
    if (a%2==1)
        cout << a-4 << ' ' << a-2; 
    else 
        cout << a-3 << ' ' << a-1;
      
    return 0;
  
}