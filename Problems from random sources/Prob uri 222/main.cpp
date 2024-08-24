#include <iostream>

using namespace std;

int main() {

   int M,N,i,sum=0,min,max;
   cin>>M>>N;

    if(M < N){
  min = M;
  max = N;
 }else{
  max = M;
  min = N;
 }

    for(i = min; i <=max; i=i+1){
    cout<<i<<" ";
    }

   sum += ((max+min)*2)-2;
   cout<<"Sum="<<sum<<endl;


    return 0;
}
