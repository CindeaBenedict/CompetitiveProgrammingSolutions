#include <iostream>
using namespace std;

int main()
{
    char ch[21];
    cin >> ch;
    int i=0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='u' || ch[i]=='o')
            {}        else
            cout << ch[i];
        i++;
    }
    return 0;
}