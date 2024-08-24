#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
    double ab,bc,ca;
    double p=0,S=0,Ah=0, Bh=0, Ch=0;;
    cin>>ab>>bc>>ca;
    if(pow(ab,2)==pow(bc,2)+pow(ca,2) || pow(bc,2)==pow(ab,2)+pow(ca,2) || pow(ca,2)==pow(bc,2)+pow(ab,2)){
    p=(ab+bc+ca)/2.00;
    S=sqrt(p*(p-ab)*(p-bc)*(p-ca));
    Ah=(S*2.0)/bc;
    Bh=(S*2.0)/ca;
    Ch=(S*2.0)/ab;
        cout<<fixed<<setprecision(2)<<Ah<<" "<<Bh<<" "<<Ch<<endl;
    }
    else
        cout<<"Imposibil"<<endl;

}
