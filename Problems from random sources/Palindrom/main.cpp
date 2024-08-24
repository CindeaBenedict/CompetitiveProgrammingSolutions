#include <iostream>

using namespace std;

int main()
{
    int n,oglindit=0,aux=0;
    cin>>n;
    aux=n;
    while(n!=0){
        oglindit=oglindit*10+n%10;
        n=n/10;
    }
    if(oglindit==aux)
        cout<<"Palindrom";
    else
        cout<<"Nu este palindrom";
    return 0;
}
