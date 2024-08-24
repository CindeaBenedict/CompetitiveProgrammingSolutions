#include <iostream>

using namespace std;

int main()
{
    int x,d,s=0;
    cin>>x;
    for(d=1;d<x;d++)
    {
    if(x%d==0)
      s=s+d;
    }
    if(x==s)
        cout<<"Numarul este perfect";
    else
        cout<<"Numarul nu este perfect";
    return 0;
}
