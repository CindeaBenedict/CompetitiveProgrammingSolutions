#include <iostream>

using namespace std;

int main()
{
    int a,b=0;
    cin>>a;
    b=b*10+a/10;
    a=a/10;
    if (b!=0)
        cout<<"Cifrele diferite de 0 sunt "<<b%10;

    return 0;
}
