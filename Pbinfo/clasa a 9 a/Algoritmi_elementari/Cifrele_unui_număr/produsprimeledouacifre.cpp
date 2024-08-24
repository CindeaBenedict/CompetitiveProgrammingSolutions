#include <iostream>
using namespace std;
int main(){
    long long n,p=1;
    cin>>n;
    while(n>100)
        n=n/10;
    p=(n%10)*(n%100/10);
    cout<<p;
    return 0;
}