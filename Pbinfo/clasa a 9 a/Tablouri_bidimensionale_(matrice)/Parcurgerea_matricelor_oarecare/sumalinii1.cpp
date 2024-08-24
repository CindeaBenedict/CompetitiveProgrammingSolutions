#include <iostream>
using namespace std;
int main()
{
    int n,m,s=0,maxi;
    int a[101][101];
    cin >> n >> m;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
        cin >> a[i][j];
    for(int i=1;i<=n;++i)
    {
        s=0;
        maxi = a[i][1];
        for(int j=1;j<=m;++j)
        {
           if(maxi<a[i][j]) maxi=a[i][j];
            s=s+a[i][j];
        }
        cout << s-maxi<<" ";
    }
    return 0;

}