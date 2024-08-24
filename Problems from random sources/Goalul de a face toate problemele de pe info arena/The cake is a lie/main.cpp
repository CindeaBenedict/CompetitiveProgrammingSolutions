#include <iostream>
using namespace std;
int main()
{
    int n,raspuns=0;
    int a[]={100,20,10,5,1};
    cin>>n;
    for(int i=0;i<5;++i)
    {
        raspuns=raspuns+(n/a[i]);
        n=n%a[i];
    }
    cout<<raspuns<<endl;
    return 0;
}
