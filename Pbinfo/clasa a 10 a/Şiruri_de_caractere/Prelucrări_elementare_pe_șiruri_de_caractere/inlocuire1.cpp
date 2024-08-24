#include <iostream>
#include <cstring>

using namespace std;

char s[256] , a[101][101];

int main()
{
    cin.getline(s , 256);
    int i = 0 , j=0 , m = 1;
    while(s[i])
    {
        if(s[i]==' ')
            j=0 , m++;
        else
            a[m][j]=s[i] , j++;
        i++;
    }
    for(int i = 1 ; i <= m ; ++i)
        if(strlen(a[i]) != 3)
        cout << a[i] << ' ';
        else
        cout << "*" << ' ';
}