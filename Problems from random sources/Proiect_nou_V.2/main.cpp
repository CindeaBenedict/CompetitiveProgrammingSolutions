#include <iostream>


using namespace std;

int main()
{


   int a,b,rezultat;

   cout<<"Introduceti prima cifra ";
   cin>>a;
   cout<<"Introduceti a doua cifra ";
   cin>>b;
   cout<<"Pentru a afla suma apasati tasta 1, pentru diferenta apasati tasta 2, pentru produs apasati tasta 3, iar pentru cat apasati tasta 4 "<<endl;
   cin>>rezultat;
   if(rezultat==1) {
   cout<<"Suma este egala cu "<<a+b<<endl; }
   else if (rezultat==2) {
   cout<<"Diferenta este egala cu "<<a-b<<endl;}
   else if (rezultat==3) {
   cout<<"Produsul este egal cu "<<a*b<<endl;}
  else if (rezultat==4){
   if(a%b!=0){
   if (a>b)
  {
   cout<<"Impartirea cu rest  A la B este egala "<<a/b<<" rest "<<a%b<<endl;
   cout<<"Impartirea cu rest  B la A este egala "<<b/a<<" rest "<<b%a<<endl;
  }
  else

  {
   cout<<"Impartirea cu rest  lui B la A este egala "<<b/a<<" rest "<<b%a<<endl;
   cout<<"Impartirea cu rest  a lui A la B etse egala "<<a/b<<" rest "<<a%b<<endl;
  }
   }
   else
   {
       if(b>a){
   cout<<"Impartirea  lui B la A este egala "<<b/a<<endl;
   cout<<"Impartirea lui A la B este egala "<<a/b<<endl;
       }
       else {
         cout<<"Impartirea  lui A la B este egala "<<a/b<<endl;
   cout<<"Impartirea lui B la A este egala "<<b/a<<endl;
       }
   }
  }
  else {
    cout<<"EROARE";  }
    return 0;
}

