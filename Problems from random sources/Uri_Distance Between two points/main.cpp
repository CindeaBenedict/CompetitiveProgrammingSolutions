#include <iostream>
using namespace std;
int main(){

    double x;
    int aux2, aux, aux1;

    cin >> x;
    aux1=x;
    x=100*x;
    aux2=x;
    cout << "NOTAS:"<<endl;
    cout << aux1/100 << " nota(s) de R$ 100,00"<<endl;
    aux = (aux1%100);
    cout << aux/50 << " nota(s) de R$ 50,00"<<endl;
    aux = (aux%50);
    cout << aux/20 << " nota(s) de R$ 20,00"<<endl;
    aux = (aux%20);
    cout << aux/10 << " nota(s) de R$ 10,00"<<endl;
    aux = (aux%10);
    cout << aux/5 << " nota(s) de R$ 5,00"<<endl;
    aux = (aux%5);
    cout << aux/2 << " nota(s) de R$ 2,00"<<endl;
    aux = (aux%2);
   cout<<"MOEDAS:"<<endl;
   cout << aux/1 << " moeda(s) de R$ 1,00"<<endl;
   aux2=(aux2%100);
   cout << aux2/50 << " moeda(s) de R$ 0,50"<<endl;
     aux2=(aux2%50);
   cout << aux2/25 << " moeda(s) de R$ 0,25"<<endl;
     aux2=(aux2%25);
   cout << aux2/10 << " moeda(s) de R$ 0,10"<<endl;
     aux2=(aux2%10);
   cout << aux2/5 << " moeda(s) de R$ 0,05"<<endl;
     aux2=(aux2%5);
   cout << aux2<< " moeda(s) de R$ 0,01"<<endl;
    return 0;
}
