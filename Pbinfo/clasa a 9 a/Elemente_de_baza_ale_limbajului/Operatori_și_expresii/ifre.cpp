#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    s=s+n%10;
    s=s+(n/10)%10;
     cout<<s;
    return 0;
}
    