#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n,max=INT_MIN;
    cin>>n;
    if(n==0) cout<<0;
    else{
    while(n>0){
       if(n%10>max)
           max=n%10;
           n=n/10;
    }
        cout<<max;}
    return 0;
}