#include <iostream>
using namespace std;
int a[1001], b[1001],n ,m;
int main() {
    int p=0;
    int k=0;
   cin>>n;
   for(int i=1;i<=n;i++)
       cin>>a[i];
   cin>>m;
    for(int i=1;i<=m;i++)
        cin>>b[i];
    for(int i = 0 ; i <= n-m ; ++i)
    {
        int cnt=0;
        for(int j = i ; j <=i + m ; ++j)
        {
            if(a[j]==b[j-i])
                cnt++;
        }
        if(cnt==m && k==0) {
            p = i + 1;
            k++;
        }
    }
    if(k==0)
        cout<<"NU";
    else
        cout<<p;

    return 0;
}
