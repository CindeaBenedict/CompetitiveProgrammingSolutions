#include <iostream>
using namespace std;
int n,fin,start,s,a[1001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        if(a[i]%2==1) 
            fin=i;
    }
    for(int i=1;i<=n;++i)
        if(a[i]%2==1){
        start=i; 
        break;}
    for(int i=start;i<=fin;++i)
        s=s+a[i];
    cout<<s;
    return 0;
}