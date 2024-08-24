#include <iostream>

using namespace std;


int main(){

    int n, nr=0;
    cin>>n;

    while(n){
        nr=nr*10+n%10;
        n=n/10;
    }
    while(nr){
        if(nr%10!=0){
            cout<<nr%10<<" ";
        }
    nr=nr/10;
    }
    return 0;
}

