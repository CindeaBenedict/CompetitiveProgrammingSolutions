#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a; 
    cin >> a;
    if (a%2==1)
        cout << a+1 << ' ' << a+3; 
    else 
        cout << a+2 << ' ' << a+4;
      
    return 0;
  
}