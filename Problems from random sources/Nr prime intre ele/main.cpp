#include <iostream>


using namespace std;

int main()
{
    unsigned x,y,r;
    cin>>x>>y;
    r=x%y;
    while(x*y!=0)
    {
        x=y;
        y=r;
        r=x%y;
    }
    if(y==1)cout<<"DA";
    else cout<<"NU";
    return 0;
}
