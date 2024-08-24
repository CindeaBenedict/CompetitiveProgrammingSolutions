#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[260];
    cin.getline(ch , 260);
    int i = 0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='u' || ch[i]=='o')
            cout << ch[i] << 'p' << ch[i];
        else
            cout << ch[i];
        i++;
    }
}