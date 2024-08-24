#include <bits/stdc++.h>
using namespace std;

char ch[201];

int main()
{
    
    cin.getline(ch , 201);
    int suma=0;
    int cnt=0;
    int i = 0;
    while(ch[i]!='\0')
    {
        if((int)ch[i] <= 64 || (int)ch[i] >= 91)
        {
            if((char)ch[i]!='a' && (char)ch[i]!='e' && (char)ch[i]!='i' && (char)ch[i]!='o' &&(char)ch[i]!='u' && (int)ch[i]!=32)
                suma+=(int)ch[i] , cnt++;
        }
        i++;
    }
    
    int rez = suma/cnt;
    cout << (char)rez;
    return 0;    
}