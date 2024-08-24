#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int a[1001],n,i,min=INT_MAX,max=INT_MIN;
     cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++){
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    cout<<min<<" "<<max;
    return 0;
}