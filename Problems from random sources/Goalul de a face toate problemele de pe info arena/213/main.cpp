#include <iostream>

using namespace std;


int main(){
int n,cnt=0,aux=0,aux2=0,i,j;
cin>>n;
aux=n;

while(n!=0){
    n=n/10;
    cnt++;
}

    int a[100][100];
  for(i=1;i<=cnt;i++)
    for(j=1;j<=cnt;j++){
            if(i==1){
    a[i][j]=aux%10;
    aux=aux/10;}
    else
        a[i][j]=a[1][j];
    }

   for(i=1;i<=cnt;i++){
   for(j=1;j<=cnt;j++)
     cout<<a[i][j]<<" ";
     cout<<endl;}
    return 0;
}
