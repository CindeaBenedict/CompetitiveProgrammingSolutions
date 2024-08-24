#include <iostream>

using namespace std;

int main()
{
   int b,o,cnt;
   for(b=1;b<=500;b++){
        cnt=0;
    for(o=1;o<=b;o++){
        if(b%o==0)
            cnt++;
    }
   if(cnt>=8 && cnt<=10)
    cout<<b<endl;
   }
    return 0;
}
