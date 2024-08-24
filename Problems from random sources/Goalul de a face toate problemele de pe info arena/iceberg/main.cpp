#include <iostream>
using namespace std;

int main()
{
    int a[102][102], b[102][102];
    int n, cnt = -1, ok = 0, v[101], p = 0, s = 0, s1= 0;
    cin >> n;
    for(int i = 1 ; i <= n ; ++i)
    {
        a[i][0]=1;
        a[i][n+1]=1;
    }
    for(int i = 1 ; i <= n ; ++i)
    {
        a[0][i]=1;
        a[n+1][i]=1;
    }
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= n ; ++j)
        {
            cin >> a[i][j];
            b[i][j]=a[i][j];
            if(a[i][j]==1) s++;
        }
    s1 = s;
    v[p]=s, p++;
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= n ; ++j)
            if(a[i][j]==1) ok = 1;
    while(ok == 1)
    {
        int r = 0;
        ok = 0;
        cnt++;
        for(int i = 1 ; i <= n ; ++i)
            for(int j = 1 ; j <= n ; ++j)
                if((a[i+1][j]==0 && a[i][j+1]==0)||(a[i+1][j]==0 && a[i-1][j]==0)||(a[i+1][j]==0 && a[i][j-1]==0)||(a[i][j+1]==0 && a[i-1][j]==0)||(a[i][j+1]==0 && a[i][j-1]==0)||(a[i-1][j]==0 && a[i][j-1]==0))
                    b[i][j]=0;
        for(int i = 1 ; i <= n ; ++i)
            for(int j = 1 ; j <= n ; ++j)
                if(b[i][j]!=a[i][j]) ok = 1, r++;
        for(int i = 1 ; i <= n ; ++i)
            for(int j = 1 ; j <= n ; ++j)
                a[i][j]=b[i][j];
        s1= s1- r;
        v[p]=s1 ;
        p++;
    }
    ok = 0;
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= n ; ++j)
            if(a[i][j]==1) ok=1;
    if(ok==0) cout << cnt;
    else cout << -1;
    cout << endl;
    for(int i = 0 ; i < p ; ++i) if(v[i]!=0)cout << v[i] << endl;
    return 0;
}
