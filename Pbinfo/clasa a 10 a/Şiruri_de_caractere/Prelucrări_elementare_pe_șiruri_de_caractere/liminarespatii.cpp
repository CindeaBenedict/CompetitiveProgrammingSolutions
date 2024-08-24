#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch[300];
    cin.getline(ch , 300);
    int i = 0;
    while(ch[i]!='\0')
    {
        if((i==0 || ch[i-1]==' ') && ch[i]==' ')
            {}
        else
            cout << ch[i];
        i++;
    }
    return 0;    
}