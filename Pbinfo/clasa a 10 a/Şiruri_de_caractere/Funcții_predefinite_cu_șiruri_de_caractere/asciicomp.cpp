#include <bits/stdc++.h>

using namespace std;

char m[260][260];
int tygo = 0;

bool lit(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

bool ok(char s[])
{
    int i = 0;
    while(s[i])
    {
        if(lit(s[i]))
            return 1;
        i++;
    }
    return 0;
}

int sca(char s[])
{
    int i = 0;
    int sum = 0;
    while(s[i])
    {
        sum+=(int)s[i];
        i++;
    }
    return sum;
}

void sterg(char s[])
{
    s[0]='\0';
}

int main()
{
    char s[256];
    cin.getline(s , 300);
    int i = 0 , cnt = 1 , j = 0;
    while(s[i]!='\0')
    {
        if(s[i]!=' ')
        {
            m[cnt][j]=s[i];
            j++;
        }
        if(s[i]==' ' && s[i+1]!=' ')
        {
            cnt++;
            j=0;
        }
        i++;
    }
    int v[101];
    for( i = 1 ; i <= cnt ; ++i)
        if(ok(m[i]))
        v[i] = sca(m[i]);
    for( i = 1 ; i <= cnt ; ++i)
        for(j = i  ; j <= cnt ; ++j)
            if(v[i] >= v[j])
                swap(v[i] , v[j]);
    for( i = 1 ; i <= cnt ; ++i)
    {
        bool oky = false;
        for(j = 1 ; j <= cnt ; ++j)
            {
                if(sca(m[j])==v[i] && ok(m[j]))
                    oky=true;
            }
        if(v[i]!=v[i-1] && v[i]!=0 && oky)
        {
            cout << v[i] << ' ';
            for(j = 1 ; j <= cnt ; ++j)
            {
                if(sca(m[j])==v[i] && ok(m[j]))
                    cout << m[j] << ' ';
            }
            tygo++;
            if(i != cnt)
            cout << endl;
        }
    }
    if(!tygo)
        cout << "NU EXISTA";
    return 0;
}