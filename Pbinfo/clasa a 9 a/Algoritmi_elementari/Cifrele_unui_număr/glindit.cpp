#include <iostream>
using namespace std;
int main()
{
    int n,ogl=0;
    cin>>n;
    while(n>0)
    {
        ogl=ogl*10+(n%10);
        n=n/10;
    }
    
    cout<<ogl;
    
    return 0;
    
}