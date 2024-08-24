#include <iostream>
using namespace std;
int main(){
int s;
    int cnt=0;
    int v=0;
    cin>>s;
    for(int i=1;i<=6;++i){
v=v+i;
     if(v==6){
         ++cnt;
     v=0;
     }


    }

cout<<cnt;
return 0;
}