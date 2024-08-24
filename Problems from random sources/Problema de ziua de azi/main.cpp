#include <iostream>

using namespace std;

int main()
{
    int a,cnt=0;
    while (a>0){
        if((a%10)%2!=0){
            a=a/10;
            cnt++;}
        else{
            a=a/10;}
    }
    cout<<cnt<<endl;

    return 0;
}
