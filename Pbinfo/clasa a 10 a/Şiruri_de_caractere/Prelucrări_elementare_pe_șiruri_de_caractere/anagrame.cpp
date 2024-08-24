#include <bits/stdc++.h>
using namespace std;

int f[300] , g[300];

int main()
{
    char a[21] , b[21];
    cin >> a >> b;
    int i = 0;
    while(a[i]!='\0')
    {
        f[(int)a[i]]++;
        i++;
    }
    i=0;
    while(b[i]!='\0')
    {
        g[(int)b[i]]++;
        i++;
    }
    bool adev=true;
    for(int i = 50 ; i <= 150 ; ++i)
    {
        if(f[i]!=g[i])
            adev=false;
    }
    if(adev)
        cout << "1";
        else
        cout << "0";
    return 0;    
}