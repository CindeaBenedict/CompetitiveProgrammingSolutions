#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[101];
    cin.getline(ch , 101);
    int i = 0;
    int ok = 0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o'  || ch[i]=='u')
        {
            
            ok++;
        }
        
        i++;
    }
    if(ok==0)
        cout << "FARA VOCALE";
    else
    {
       i =0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o'  || ch[i]=='u')
        {
            cout << ch[i] << '*';
            ok++;
        }
        else
            cout << ch[i];
        i++;
    }
    }
    return 0;    
}