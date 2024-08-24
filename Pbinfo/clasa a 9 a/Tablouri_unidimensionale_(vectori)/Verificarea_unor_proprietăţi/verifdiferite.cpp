#include <iostream>

using namespace std;

int main()
{
    int n,i,v[500],t,j;
    cin>>n;t=1;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n-1&&t==1;i++)
    for(j=i+1;j<=n&&t==1;j++)    
        {if(v[i]==v[j])
        t=0;}

    if(t==1)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}