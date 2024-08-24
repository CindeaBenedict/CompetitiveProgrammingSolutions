#include <iostream>
using namespace std;
char ch[256];
int main()
{
    cin.getline(ch , 256);
    int i = 0;
    while(ch[i]!='\0')
    {
        if(i==0 || ((int)ch[i-1]==32 || (int)ch[i+1]==32) && ((int)ch[i] >= 97 && (int)ch[i] <= 122) || (ch[i+1]=='\0')) 
        {
            int nr=(int)ch[i]-32;
            cout << (char)nr;
        }
        else
            cout << ch[i];
        i++;
    }
    return 0;
}