#include <bits/stdc++.h>
using namespace std;

int main()
{
    char mat[255][255];
    char s[256];
    cin.getline(s , 300);
    int i = 0 , j = 0 , cnt=-1;
    bool ok = false;
    while(s[i]!='\0')
    {
        if(((int)s[i]>=65 && (int)s[i]<=91) || ((int) s[i] <= 122 && (int)s[i]>96))
        {
            if(!ok)
            {
                cnt++;
                ok = true;
            }
            mat[cnt][j]=s[i] , j++;
        }
        else
            j=0 , ok = false;
        i++;
    }
    if(cnt%2==0)
    {
        for(int i = 0 ; i < cnt / 2 ; ++i)
        {
            cout << mat[i] << endl << mat[cnt - i] << endl;
        }
        cout << mat[cnt/2];
    }
    else
    {
        for(int i = 0 ; i <= cnt / 2 ; ++i)
        {
            cout << mat[i] << endl << mat[cnt - i] << endl;
        }
    }
    return 0;
}