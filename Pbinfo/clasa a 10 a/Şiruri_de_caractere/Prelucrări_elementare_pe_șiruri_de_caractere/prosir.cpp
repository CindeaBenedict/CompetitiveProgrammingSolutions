#include <fstream>
using namespace std;

ifstream cin("prosir.in");
ofstream cout("prosir.out");

char ch[256];

int main()
{
    cin.getline(ch , 256);
    int i = 0;
    while(ch[i]!='.')
    {
        if(((int)ch[i+1]==32 || ch[i+1]=='.') && ch[i]!=' ') 
        {
            cout << 5;
        }
        else
            cout << ch[i];
        i++;
    }
    cout << '.';
    return 0;
}