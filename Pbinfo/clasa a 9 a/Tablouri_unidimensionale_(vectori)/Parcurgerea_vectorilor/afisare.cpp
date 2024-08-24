#include<iostream>
using namespace std;
int main()
{
int a[1001],i,n;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=2;i<=n;i+=2)
        cout<<a[i]<<" ";
    cout<<endl;
    for(i=n;i>=1;i--)
        if(i%2!=0)
        cout<<a[i]<<" ";
return 0;
}
      