#include <iostream>

using namespace std;

int main()
{
    int n,c,cnt=0;
    cout<<"n=";
    cin>>n;
    while(n!=0)
       {
    c=n%10;
    if(c%2!=0) cnt=cnt+1;
        n=n/10;
    }
    cout<<"cifre impare sunt:"<<cnt<<endl;
    return 0;
}
