#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = 0,cnt = 0;
    for(int i = 1; i*i <= n ; i++)
    {
       if(n % i == 0)
       {
          
            s = s + i; cnt++;
           if(i * i < n)
           {
              
               s = s + n/i ; cnt++;
           }
       }
    }
    cout <<fixed<<setprecision(2)<<(float) s/cnt;
    return 0;
}