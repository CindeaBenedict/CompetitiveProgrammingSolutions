#include <iostream>
using namespace std;
int zerof(int n)
{
    int p=0,s=0;
    if (n==0) return 0;
    else{
        for ( int i=1;i<=n;i++)
        {
            int x=i;
            while ( x%5==0) {s++;x=x/5;}
            while (x%2==0) {p++;x=x/2;}
        }
        if (p<=s)return p;
        else return s;
    }
}
int main()
{
    int a;
    cin>>a;
    cout<<zerof(a) <<endl;
    return 0;
}
