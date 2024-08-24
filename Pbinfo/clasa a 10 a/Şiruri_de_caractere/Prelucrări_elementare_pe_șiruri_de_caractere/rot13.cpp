#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>

using namespace std;

char codificare (char c)
{
    char ans = c;
    if (c>='n' && c<='z')
        ans = c-13;
    else if (c>='a' && c<'n')
    {
        ans = c+13;
    }
    else if (c>='N' && c<='Z')
        ans = c-13;
    else if (c>='A' && c<'N')
    {
        ans = c+13;
    }

    return ans;
}


int main()
{
    char c;
    string result;
    do
    {
        c = getchar();
        if (c!='\n' && c!=EOF) cout<<codificare(c);
    }
    while (c!='\n' && c!=EOF);

}