#include <iostream>
using namespace std;

int main()
{
    char ch[11];
    cin >> ch;
    int n=0;
    while(ch[n]!='\0')
        n++;    
    int i = n;
    while(i)
    {
        int j = 0;
        while(j<i)
        {
            cout << ch[j];
            j++;
        }
        cout << endl;
        i--;
    }
    i=0;
    while(ch[i]!='\0')
    {
        int j = i; 
        while(ch[j]!='\0')
        {
            cout << ch[j];
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;    
}