#include <iostream>

using namespace std;

char s[256];

void stergere(int i , int l)
{
    for( ; s[i]!= '\0' ; i++)
        s[i - l] = s[i];
    s[i-l]='\0';
}

int main()
{
    cin >> s;
    int i = 0;
    int  l = 1;
    bool ok = true;
    while(s[i]!='\0')
    {
        if(tolower(s[i])==tolower(s[i-1]))
            l++;
        else
        {
            if(l > 1)
                stergere(i , l) , i=0;
            l=1;
        }
        i++;
        if(s[i]=='\0' && ok)
            s[i]=' ' , s[i+1]='\0' ,ok=false;
    }
    cout << s;
    return 0;
}