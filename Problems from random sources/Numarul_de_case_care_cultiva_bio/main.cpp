#include <iostream>

using namespace std;

int main()
{
    int i,s,j;
    for(i=1; i<=300;i++){
        s=0;
        for(j=1;j<=i/2;j++){
                if(i%j==0){
                    s=s+j;
                    if(s==i){
                        cout<<i<<" ";
                    }
                }
        }
    }


    return 0;
}
