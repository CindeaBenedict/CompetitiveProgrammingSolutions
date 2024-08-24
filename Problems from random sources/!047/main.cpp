#include <iostream>

using namespace std;

int main() {
 int a,b, hour=0, minu=0, A,B;
 cin>>a>>A>>b>>B;
 if (a==b && a!=0 && b!=0){
     if(A==B){
         minu=0;
         hour=24;
     cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minu<<" MINUTO(S)"<<endl;

     }
     else if(A<B){
         minu=B-A;
         hour=24;
     cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minu<<" MINUTO(S)"<<endl;

     }
     else if(A>B){
         minu=(60+B)-A;
         hour=24;
     cout<<"O JOGO DUROU "<<hour-1<<" HORA(S) E "<<minu<<" MINUTO(S)"<<endl;

     }
      }
 else if(a<b){   if(A==B){
         minu=0;
          hour=b-a;
      cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minu<<" MINUTO(S)"<<endl;

     }
     else if(A<B){
         minu=B-A;
          hour=b-a;
      cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minu<<" MINUTO(S)"<<endl;

     }
     else if(A>B){
         minu=(60+B)-A;
          hour=b-a;
      cout<<"O JOGO DUROU "<<hour-1<<" HORA(S) E "<<minu<<" MINUTO(S)"<<endl;

     }

 }
 else if(a>b){
        if(A==B){
         minu=0;
          hour=(24+b)-a;
    cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minu<<" MINUTO(S)"<<endl;

     }
     else if(A<B){
         minu=B-A;
          hour=(24+b)-a;
    cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minu<<" MINUTO(S)"<<endl;

     }
     else if(A>B){
         minu=(60+B)-A;
          hour=(24+b)-a;
    cout<<"O JOGO DUROU "<<hour-1<<" HORA(S) E "<<minu<<" MINUTO(S)"<<endl;

     }
      }
      else if(a==0 && b==0 && a==b){

      if(A==B)
        {
         minu=0;
          hour=0;
    cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minu<<" MINUTO(S)"<<endl;

     }
     else if(A<B){
         minu=B-A;
          hour=0;
    cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minu<<" MINUTO(S)"<<endl;

     }
     else if(A>B){
         minu=(60+B)-A;
          hour=0;
    cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minu<<" MINUTO(S)"<<endl;

     }
      }
     return 0;
 }



