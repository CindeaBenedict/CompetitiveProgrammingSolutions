#include <iostream>
#include <algorithm>
using namespace std;
int main(){
long long n, a[1000001];
   
    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>a[i];
    sort(a+1,a+n+1);
    if(a[1]*a[2]>=a[n-1]*a[n])
        cout<<a[1]*a[2];
    else
        cout<<a[n-1]*a[n];

}