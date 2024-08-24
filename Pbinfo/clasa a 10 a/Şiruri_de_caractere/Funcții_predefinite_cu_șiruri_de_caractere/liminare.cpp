#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[300];
    cin >> ch;
    int i = 0;
    while(ch[i]!='\0')
    {
        int j = 0;
        while(ch[j]!='\0')
        {
            if(i!=j)
            cout << ch[j];
            j++;    
        }
        cout << endl;
        i++;    
    }
    return 0;    
}