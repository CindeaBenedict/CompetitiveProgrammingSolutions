#include <iostream>
using namespace std;

int f[1000];
char s[1000];

void init()
{
    for(int i = 1 ; i <= 1000 ; ++i)
        f[i]=0;
}

bool verif(int i)
{
    init();
    for( ; s[i]!=' ' && s[i]!='\0' ; ++i)
        f[(int)s[i]]++;
    for(int i = 50 ; i < 200 ; ++i)
        if(f[i]>1)
            return 0;
    return 1;
}

int lung(int i)
{
    int cnt = 0;
    for( ; s[i]!=' ' && s[i]!='\0' ; ++i)
        cnt++;
    return cnt;
}

void afis(int i)
{
    for( ; s[i] != ' ' && s[i]!='\0' ; ++i)
        cout << s[i];
}

int main()
{
    int ind = -1;
    int max=0;
    cin.getline(s , 300);
    if(verif(0))
        ind = 0 , max = lung(0);
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]==' ' && s[i+1]!=' ' && s[i+1]!='\0')
            if(verif(i+1) && lung(i+1)>max)
                ind = i+1 , max = lung(i+1);
        i++;
    }
    if(ind!=-1)
    afis(ind);
    else
        cout << -1;
    return 0;
}