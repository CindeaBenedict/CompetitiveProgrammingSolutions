#include <iostream>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    while(n>100)
        n=n/10;
    s=n%10+n%100/10;
    cout<<s;
    return 0;
}
