#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n; // n - numãrul citit de la tastaturã care se verificã dacã este pãtrat perfect
cout<<"n="; cin>>n;
if (sqrt(n)==(int)(sqrt(n)))
cout<<n<<" este patrat perfect "<<endl;
else
cout<<n<<" nu este patrat perfect "<<endl;
}
