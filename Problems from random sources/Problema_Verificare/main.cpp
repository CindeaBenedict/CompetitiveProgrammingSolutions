#include <iostream>

using namespace std;

int main() {

   char type1[100], type2[100],type3[100];
   cin>>type1>>type2>>type3;
   if(type1=="vertebrado"){
       if(type2=="ave"){
           if(type3=="carnivoro"){
               cout<<"aguia"<<endl;
           }
           else if(type3=="onivoro")
           {
           cout<<"pomba"<<endl;
           }
       }
       else if(type2=="mamifero"){
           if(type3=="onivoro"){
               cout<<"homen"<<endl;
           }
           else if(type3=="herbivoro"){
               cout<<"vaca"<<endl;
           }
       }
   }
   else if(type1=="invertebrado"){
       if(type2=="inseto"){
           if(type3=="hematofago"){
               cout<<"pulga"<<endl;
           }
           else if(type3=="herbivoro"){
               cout<<"lagarta"<<endl;
           }
       }
       else if(type2=="anelideo"){
           if(type3=="hematofago"){
               cout<<"sanguessuga"<<endl;
       }
       else if(type3=="onivoro"){
           cout<<"minhoca"<<endl;
       }
   }
   }
    return 0;
}
