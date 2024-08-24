#include <iostream>
using namespace std;
int main ()
{
    int n,i,cntp=0,cnti=0,x;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        if(x==0) cntp++;
        else{
        while(x>0){
        if(x%10%2==0){
            cntp++;
            x=x/10;}
        else if(x%10%2!=0){
            cnti++;
            x=x/10;}
    }
    }
    } cout<<cntp<<" "<<cnti;
    
 
return 0;
}