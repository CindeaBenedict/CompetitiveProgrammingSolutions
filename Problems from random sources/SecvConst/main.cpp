#include <iostream>
using namespace std;

int main()
{
    char ch[300];
    cin.getline(ch , 300);
    int i = 0;
    int l = 0 , lmax = 0 , indice=0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
        {
            l=0;
        }
        else
            l++;
        if(l>=lmax)
                lmax=l , indice=i-l;
        i++;
    }
    for(int  i = indice+1 ; i <= indice+lmax ; ++i)
        cout << ch[i];
    return 0;
}