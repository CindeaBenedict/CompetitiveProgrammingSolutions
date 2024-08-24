#include <iostream>

using namespace std;
int oglindit(int n){
int aux=0,aux1=0;
    while (n){
            aux1=n%10;
        aux=aux+aux1;
    aux=aux*10;
        n=n/10;

    }
    aux=aux/10;
    return aux;
}
int main()
{int a;
cin>>a;
    cout << oglindit(a) << endl;
    return 0;
}
