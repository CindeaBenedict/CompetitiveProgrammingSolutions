#include <iostream>
using namespace std;
int main() {
	int T,i,A,B,C;
	cin>>T;
	for(i=0;i<T;i++){
	    char A[1];
	    cin>>A;
	    if(A=="B" || A=="b"){
	    cout<<"BattleShip"<<endl;}
	 else if(A=="C" || A=="c"){
	    cout<<"Cruiser"<<endl;}
	  else if(A=="D" || A=="d"){
	    cout<<"Destroyer"<<endl;}
	   	  else if(A=="F" || A=="f"){
	    cout<<"Frigate"<<endl;}

	}

	return 0;

}
