#include <iostream>

using namespace std;

int main()
{
   int n,i,c=0;
    for(i=500;i>=1;i--){

        for(n=2;n<=i/2;n++){
            if(i%n!=0)
            c=0;
        else
            c=1;}
            if(c==0)
            cout<<i<<endl;
    }

    return 0;
}
