#include <iostream>

using namespace std;

int main(){

  int x,y;
    cin>>x>>y;
    if(y>x){
      swap (y,x);

    if(x%y!=0){
        cout<<(x/y)+1;}
        else if(x%y==0){

            cout<<x/y;}
    }
    else if(x=y){
        cout<<x/y;
    }
    else if(x>y){
        if(x%y!=0){
        cout<<(x/y)+1;}
        else if(x%y==0){

            cout<<x/y;}
    }

   return 0;

}
