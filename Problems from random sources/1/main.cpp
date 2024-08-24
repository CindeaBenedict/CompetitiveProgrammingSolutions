#include <iostream>

using namespace std;

int main()
{
    int a ,s=0,i;
    for(a=1;a<=10000;a++){
            s=0;
        for(i=1;i<=a/2;i++)
        {



        if(a%i==0)
        s=s+i;}
        if(s==a)
            cout<<i<<endl;}

    return 0;
}
