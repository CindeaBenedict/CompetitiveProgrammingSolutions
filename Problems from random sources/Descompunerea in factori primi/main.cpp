#include <iostream>

using namespace std;

int main()
{
    int n,d,p,aux; cin>>n;
    d=2;
    aux=n;cout<<aux<<": ";
    while(n>1){
        p=0;
        while(n%d==0){
            n=n/d;
            p++;

        }

        if(p>0)
            while(p!=0){
            cout<<d<<" ";
            p--;
            }

            d++;

    }
    return 0;
}
