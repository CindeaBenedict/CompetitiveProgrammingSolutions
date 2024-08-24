#include <iostream>

using namespace std;

int main()
{int test;
cin>>test;
while(test-- >0)
{


    int n;
    cin>>n;
    int y=n%2020;
    int x=(n-y)/2020-y;
    if(x>=0 && 2020*x+2021*y==n)
    {
        cout<<"YES";

    }
    else {
        cout<<"NO";
    }
}
    return 0;
}
