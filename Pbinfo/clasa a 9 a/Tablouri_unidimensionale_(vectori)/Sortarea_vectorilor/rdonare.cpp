#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int v[a+1];
    for(int i=1;i<=a;i++)
        cin>>v[i];
    sort(v+1,v+a+1);
    for(int i=1;i<=a;i++)
        cout<<v[i]<<" ";
}