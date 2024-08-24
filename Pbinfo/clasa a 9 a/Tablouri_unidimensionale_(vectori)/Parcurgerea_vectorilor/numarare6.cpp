#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int a[1001],n,i,max=INT_MIN,min=INT_MAX,cnt=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++){
        if(a[i]>max)max=a[i];
        if(a[i]<min)min=a[i];}
          for(i=1;i<=n;i++)
        if(a[i]==max-min)
        cnt++;
        cout<<cnt;
    return 0;
    
    
    
    
}