#include<iostream>
using namespace std;
int main()
{
 signed long long n,cnt=0;
    cin>>n;
    if(n==0) cout<<1;
    else {
    while(n>0){
        n=n/10;
        cnt++;
    }
        cout<<cnt;}
    return 0;
}