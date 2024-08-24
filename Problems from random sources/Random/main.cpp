#include <cstdlib>
#include <ctime>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{ while(2>1){
    srand((unsigned)time(0));
    int i,cnt=0;
    i = (rand()%6)+1;
    while (cnt<4)
        cnt++;
          if (i==1)
          system("Color 0A");
          else if(i==2)
             system("Color 0B");
          else if(i==3)
             system("Color 0C");
             else if(i==4)
             system("Color 0D");
             else if(i==5)
             system("Color 0F");
             else if(i==2)
             system("Color 0E");
    cout<<i;
    }
}
