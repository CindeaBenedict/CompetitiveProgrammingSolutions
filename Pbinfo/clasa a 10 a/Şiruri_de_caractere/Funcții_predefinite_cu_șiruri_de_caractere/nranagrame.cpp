#include <bits/stdc++.h>
using namespace std;
int anagrame(char a[] , char b[])
{
    int fa[127]={0} , fb[127]={0};
    for(int i = 0 ; i < strlen(a) ; ++i) fa[a[i]]++;
    for(int i = 0 ; i < strlen(b) ; ++i) fb[b[i]]++;
    for(char c = 'a' ; c <= 'z' ; c++)
        if(fa[c]!=fb[c])
            return 0;
    return 1;
}
int main()
{
    char s[300];
    char a[101][101];
    int n = 0;
    int cnt=0;
    while(cin >> s)
        strcpy(a[++n] , s);
    for(int i = 1 ; i < n ; ++i)
    {
        if(anagrame(a[i] , a[n]) && strcmp(a[i] , a[n]))
            cnt++;
    }
    cout << cnt;
    return 0;
}