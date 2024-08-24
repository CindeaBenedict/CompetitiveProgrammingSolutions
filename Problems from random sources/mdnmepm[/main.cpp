#include <iostream>

using namespace std;

int main() {
 bool t=false;
    int n,aux=0;
    cin>>n;
    aux=n;
    while (n>0){
        if(n%100==13)  {
            cout<<aux<<" es de Mala Suerte"<<endl;
            break;
            t=true;
        }
        n=n/10;}
        if(t==false){
             cout<<aux<<" NO es de Mala Suerte"<<endl;
        }
        return 0;
}
