#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if ((a%100)%10 == a/100 && a/100 == (a%100)/10 )
        cout << "da"; 
    else 
        cout << "nu";
      
    return 0;
  
}