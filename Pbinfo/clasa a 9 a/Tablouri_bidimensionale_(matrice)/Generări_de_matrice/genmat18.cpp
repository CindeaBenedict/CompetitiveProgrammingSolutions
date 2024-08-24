#include <iostream>
using namespace std;
int main()
{
    int n ,v[100][100],f1=1,f2=1,f3;
    cin >> n;
    v[1][1]=v[1][2]=1;
    for(int j=3;j<=n;++j)
    {
        v[1][j]=f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    for(int i = 2 ; i <= n ; ++i)
        for(int j = 1 ; j <= n ; ++j)
        {
            if(i%2==1) v[i][j]=f3=f1+f2;
            else v[i][n-j+1]=f3=f1+f2;
            f1=f2;
            f2=f3;
        }
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
