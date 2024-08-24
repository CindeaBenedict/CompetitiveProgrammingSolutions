#include <iostream>

using namespace std;

int main()
{
    int n,v[1001],cnt=0,cnt2=0,aux=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>v[i];
    for(int i=1;i<=n;i++)
    if(v[i]%2!=0)
    cnt++;
        else 
        cnt2++;
        
        if(cnt>cnt2){
    aux=cnt-cnt2;
        cout<<aux;}
    
    else{
        aux=cnt2-cnt;
        cout<<aux;}
    return 0;
}
