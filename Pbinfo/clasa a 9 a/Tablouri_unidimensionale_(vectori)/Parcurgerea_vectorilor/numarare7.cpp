#include <iostream>
using namespace std;
int main()
{
    double a[201];
    int n,i,cnt=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    if(a[1]>a[n]) swap(a[1],a[n]);
    for(i=1;i<=n;i++)
        if(a[i]<a[1] || a[i]>a[n])
        cnt++;
    cout<<cnt;
        
        
    
    
    
    return 0;}