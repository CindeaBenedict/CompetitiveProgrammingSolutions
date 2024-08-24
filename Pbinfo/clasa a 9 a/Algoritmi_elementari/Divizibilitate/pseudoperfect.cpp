#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    long long s = 0;
    for(int i = 1; i*i <= n ; i++)
    {
       if(n % i == 0)
       {
           s = s + i;
           if(i * i < n)
            s = s + n/i ;
       }
    }
    if (s%n==0)
       cout<<"DA";
        else
        cout<<"NU";
    
    return 0;
}
