#include <iostream>

using namespace std;

int n,x,y;
int a[1001];

int cmmdc(int a, int b)
{
    if(b==0)
        return a;
    else
        return cmmdc(b,a%b);
}

int main()
{
    cin >> n;
    for(int i=1;i<=n;++i)
        cin >> a[i];
    int x=cmmdc(a[1],a[2]);
    for(int i=3;i<n;++i){
         x=cmmdc(a[i],x);
    }
    cout << x;


    return 0;

}