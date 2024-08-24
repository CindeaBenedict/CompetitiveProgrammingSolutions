#include <iostream>

using namespace std;
void f (int a[];int n;){
    for(i=1;i<=n;i++)
        if(a[i]<0)
        a[i]=-a[i];
}
int main()
{
   f();
    return 0;
}
