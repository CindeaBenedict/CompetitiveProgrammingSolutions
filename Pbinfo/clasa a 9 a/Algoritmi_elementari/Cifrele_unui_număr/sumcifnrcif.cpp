#include <iostream>
using namespace std;
int main(){
long long n,s=0,cnt=0;
    cin>>n;
    while(n>0){
        s=s+n%10;
        n=n/10;}
    while(s>0)
    {
        s=s/10;
        cnt++;
    }
    cout<<cnt;
    return 0;
}