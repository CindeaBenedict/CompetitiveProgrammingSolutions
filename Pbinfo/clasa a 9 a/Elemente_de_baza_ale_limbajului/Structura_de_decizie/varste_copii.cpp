#include <iostream>
using namespace std;
int main(){
    int a,b,x;
    cin>>a>>b;
    if(a>b){
         
       x=a-b;
        cout<<"Primul copil este mai mare cu "<<x <<" ani"<<endl;}
    
    else if(b>a){
        swap(a,b);
      x=a-b;
        cout<<"Al doilea copil este mai mare cu "<<x <<" ani"<<endl;}
    else if(a-b==0){
        cout<<"Copiii au varste egale"<<endl;}
    else
    return 0;
}
