#include <iostream>

using namespace std;

int main()
{
   int x,cnt=0;
   cin>>x;
   while (x!=0)
   {
       if (x>0)
        cnt++;
       cin>>x;
   }
   cout<<cnt;
    return 0;
}
