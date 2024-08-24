#include <iostream>
using namespace std;
int main()
{int n,a[101][101],v[101][101];
    cin>>n;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
            cin>>a[i][j];
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
            v[i][j]=a[j][i];
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}