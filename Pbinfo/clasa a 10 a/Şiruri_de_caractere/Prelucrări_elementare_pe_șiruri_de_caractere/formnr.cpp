#include <iostream>
using namespace std;

int main()
{
    char s[256];
    cin.getline(s , 256);
    int i = 0;
    int sum=0 , nr = 0;
    while(s[i]!='\0')
    {
        if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9')
            nr = nr * 10 + ((int)s[i]-48);
        else
            sum+=nr , nr = 0;
        i++;
    }
    cout << sum;
    return 0;
}