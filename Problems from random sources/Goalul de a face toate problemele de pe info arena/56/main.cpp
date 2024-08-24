#include <iostream>
using namespace std;
int main()
{
    int i,v[105],n,ok=1;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>v[i];
        if(v[i]%2!=0)
        {
            ok=0;
            break;
        }
    }
    if(ok==0)   cout<<"NU";
    else  cout<<"DA";
    return 0;
}
