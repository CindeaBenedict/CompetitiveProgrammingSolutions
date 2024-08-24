#include <iostream>

using namespace std;

int main()
{
    int n,v[101],cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>v[i];
    for(int i=1;i<=n;i++)
    if(v[i]%2!=0)
    cnt++;
    if(cnt!=0)
    cout<<"DA"<<endl;
    else
    cout<<"NU"<<endl;
    return 0;
}
