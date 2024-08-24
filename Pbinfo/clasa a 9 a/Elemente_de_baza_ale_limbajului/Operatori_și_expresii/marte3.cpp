#include<iostream>
    using namespace std;
int main()
{
    int x,y,n;  //x=zi , y=ore , n=antene
    cin>>x>>y>>n;
    cout<<n/(x*y)<<endl;
    cout<<(n%(x*y))/y<<endl;
    cout<<(n%(x*y))%y;
    return 0;
}