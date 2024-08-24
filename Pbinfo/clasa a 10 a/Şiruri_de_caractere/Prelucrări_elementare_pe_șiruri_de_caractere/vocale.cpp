#include <iostream>
using namespace std;

int main()
{
    char ch[21];
    cin >> ch;
    int i = 0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='a')
            cout << 'A';
        else if(ch[i]=='e')
            cout << 'E';
        else if(ch[i]=='i')
            cout << 'I';
        else if(ch[i]=='o')
            cout << 'O';
        else if(ch[i]=='u')
            cout << 'U';
        else
            cout << ch[i];
        i++;
    }
    return 0;
}