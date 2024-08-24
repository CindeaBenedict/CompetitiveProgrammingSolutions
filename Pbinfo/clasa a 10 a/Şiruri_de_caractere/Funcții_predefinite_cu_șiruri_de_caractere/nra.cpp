#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[300];
    cin.getline(ch , 300);
    int i = 0;
    int cnt=0;
    int ok=0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='a' && ok==0)
        {
            ok++;
            cnt++;
        }
        if(ch[i]==' ')
            ok=0;
        i++;
    }
    cout << cnt;
    return 0;
}