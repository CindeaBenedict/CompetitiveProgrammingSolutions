#include <iostream>
#include <cstring>

using namespace std;

int lcs[1003][1003], lunga, lungb;
char a[1003], b[1003];

int main()
{
    cin >> a >> b;
    char tmp[1001];
    strcpy(tmp, a);
    a[0] = '#';
    strcpy(a + 1, tmp);
    strcpy(tmp, b);
    b[0] = '#';
    strcpy(b + 1, tmp);
    lunga = strlen(a);
    lungb = strlen(b);
    for(int i = 1; i <= lunga; i++)
        for(int j = 1; j <= lungb; j++) {
            if(a[i] == b[j]) lcs[i][j] = lcs[i - 1][j - 1] + 1;
            else lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
        }
    cout << lcs[lunga - 1][lungb - 1];
    return 0;
}