#include <bits/stdc++.h>

using namespace std;

char mat[100][100];

int main()
{
    char s[300];
    cin.getline(s , 300);
    int i = 0;
    int j = 0 , cnt = 1;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
            j=0 , cnt++;
        else
            mat[cnt][j]=s[i] , j++;
        i++;
    }
    for(int i = 1 ; i <= cnt ; ++i)
        for(int j = i + 1 ; j <= cnt ; ++j)
            if(strcmp(mat[i] , mat[j]) > 0)
                swap(mat[i] , mat[j]);
    int lmax = 0;
    for(int i = 1 ; i <= cnt ; ++i)
        if(strlen(mat[i]) > lmax)
            lmax=strlen(mat[i]);
    for(int i = lmax ; i >= 1 ; --i)
        for(int j = 1 ; j <= cnt ; ++j)
            if(strlen(mat[j])==i)
                cout << mat[j] << '\n';
    return 0;
}