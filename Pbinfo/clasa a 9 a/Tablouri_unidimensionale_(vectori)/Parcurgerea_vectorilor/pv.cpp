#include <iostream>
using namespace std;
int main(){
    int n,a[101],i,s=0,spar=0,cnt=0,simpar=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]%2==0)s=s+a[i];
        if(i%2==0)spar=spar+a[i];
        if(a[i]%10==0)cnt++;
        if(i%2!=0 && a[i]%3==0)simpar=simpar+a[i];}
        for(i=n;i>1;i--)
            cout<<a[i]<<" ";
    cout<<a[1]<<endl;
    cout<<s<<endl;
    cout<<spar<<endl;
    cout<<cnt<<endl;
    cout<<simpar;
    return 0;
}