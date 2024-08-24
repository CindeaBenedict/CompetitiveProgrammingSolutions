#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[11];
    cin >> ch;
    int i = 0;
    int indicevoc=-1 , ok=0;
    int indicecons=-1;
    char cons=0 , voc=0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='a' || ch[i]=='A' || ch[i]=='e' || ch[i]=='E' || ch[i]=='i' || ch[i]=='I' || ch[i]=='o' || ch[i]=='O' || ch[i]=='u' || ch[i]=='U')
        {
            if(ok==0)
                indicevoc=i , voc=ch[i] , ok++;
        }
        else
            indicecons=i , cons=ch[i];
        i++;
    }
    i=0;
    if(indicevoc!=-1 && indicecons!=-1)
    {
        while(ch[i]!='\0')
        {
            if(i==indicevoc)
                cout << cons;
            else if(i==indicecons)
                cout << voc;
            else
                cout << ch[i];
            i++;
        }
    }
    else
    cout << "IMPOSIBIL";
    return 0;    
}