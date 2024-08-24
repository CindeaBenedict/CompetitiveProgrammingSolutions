#include <bits/stdc++.h>
using namespace std;

char a[1000][21];

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; ++i)
        cin >> a[i];
    int k;
    cin >> k;
    for(int i = 0 ; i < n ; ++i)
    {
        int j = 0;
        int cnt=0;
        while(a[i][j]!='\0')
        {
            cnt++;
            j++;
        }
        if(cnt==k)
        {
            j=0;
            while(a[i][j]!='\0')
            {
            cout << a[i][j];
            j++;
            }
            cout << ' ';
        }
    }
    for(int i = 0 ; i <= n ; ++i)
    {
        int j = 0;
        int cnt=0;
        while(a[i][j]!='\0')
        {
            cnt++;
            j++;
        }
        if(cnt!=k)
        {
            j=0;
            while(a[i][j]!='\0')
            {
            cout << a[i][j];
            j++;
            }
            if(i!=n)
            cout << ' ';
        }
    }
    return 0;
}