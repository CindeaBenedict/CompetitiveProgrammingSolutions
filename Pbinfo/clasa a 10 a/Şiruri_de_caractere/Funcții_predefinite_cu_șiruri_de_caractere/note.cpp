#include <bits/stdc++.h>
using namespace std;

char s[101] , m[101][101];

bool DO(char a , char b)
{
    if(a=='D' && b=='O')
        return 1;
    return 0;
}

bool RE(char a , char b)
{
    if(a=='R' && b=='E')
        return 1;
    return 0;
}

bool MI(char a , char b)
{
    if(a=='M' && b=='I')
        return 1;
    return 0;
}

bool FA(char a , char b)
{
    if(a=='F' && b=='A')
        return 1;
    return 0;
}

bool SOL(char a , char b)
{
    if(a=='S' && b=='O')
        return 1;
    return 0;
}

bool LA(char a , char b)
{
    if(a=='L' && b=='A')
        return 1;
    return 0;
}

bool SI(char a , char b)
{
    if(a=='S' && b=='I')
        return 1;
    return 0;
}

bool oke(int i)
{
    int j = 1;
    while(m[i][j]!='\0')
    {
        if(RE(m[i][j-1] , m[i][j]))
            return 1;
        if(DO(m[i][j-1] , m[i][j]))
            return 1;
        if(MI(m[i][j-1] , m[i][j]))
            return 1;
        if(FA(m[i][j-1] , m[i][j]))
            return 1;
        if(SOL(m[i][j-1] , m[i][j]) && m[i][j+1] == 'L')
            return 1;
        if(LA(m[i][j-1] , m[i][j]))
            return 1;
        if(SI(m[i][j-1] , m[i][j]))
            return 1;
        j++;
    }
}

int main()
{
    cin.getline(s , 101);
    bool ok = true;
    int cnt = 1 , j = 0;
    int i = 0;
    while(s[i]!='\0')
    {
        if(s[i]==' ' && s[i-1]!=' ')
        {
            cnt++;
            j=0;
        }
        else
            m[cnt][j]=s[i] , j++;
        i++;
    }
    int r = 0;
    for(int i = 1 ; i <= cnt ; ++i)
    {
        if(oke(i))
            cout << m[i] << endl , r++;
    }
    if(!r)
        cout << "nu exista";
    return 0;
}