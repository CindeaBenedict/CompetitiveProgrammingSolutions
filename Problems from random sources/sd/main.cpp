#include <iostream>
#include <windows.h>

using namespace std;

int main()
{ int cnt=0;
     system("Color 0A");
     while(2>1){
        cout<<"10 in teza de la mate"<<endl;
        cnt++;
        if(cnt>1000 && cnt<1080)
            system("Color 0B");


        if(cnt>1080)
            system("Color 0C");
            if(cnt>1200)
                cnt=0;

     }


    return 0;
}
