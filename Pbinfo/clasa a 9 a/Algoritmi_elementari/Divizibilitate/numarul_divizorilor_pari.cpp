#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i%2==0)
                cnt++;
            if(i*i<n)
           {
               if(n/i%2==0)
                    cnt++ ;
           }

        }
    }
    cout<<cnt;
return 0;
}