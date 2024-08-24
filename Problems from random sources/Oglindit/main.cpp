#include <iostream>

using namespace std;

int main()
{
    int n,oglindit=0;
    cin>>n;
    while(n!=0){
        oglindit=oglindit*10+n%10;
        n=n/10;
    }
    cout<<oglindit;

    return 0;
}
