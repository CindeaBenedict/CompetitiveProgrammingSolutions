#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n; // n - num�rul citit de la tastatur� care se verific� dac� este p�trat perfect
cout<<"n="; cin>>n;
if (sqrt(n)==(int)(sqrt(n)))
cout<<n<<" este patrat perfect "<<endl;
else
cout<<n<<" nu este patrat perfect "<<endl;
}
