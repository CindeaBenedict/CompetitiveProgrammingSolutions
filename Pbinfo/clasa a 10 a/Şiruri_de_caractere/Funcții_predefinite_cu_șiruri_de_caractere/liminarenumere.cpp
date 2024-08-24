#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[101];
    cin.getline(a , 101);
    int i = 0;
    while(a[i]!='\0')
    {
        if((a[i]=='0') || (a[i]=='1') || (a[i]=='2') || (a[i]=='3') || (a[i]=='4') || (a[i]=='5') || (a[i]=='6') || (a[i]=='7') || (a[i]=='8') || (a[i]=='9'))
        {
            int ci = i;
            bool ok=0;
            while(a[i]!=' ' && a[i]!='\0')
            {
                if(a[i]=='.')
                    ok=1;
                i++;    
            }
            if(!ok)
                i=ci;
            if(a[i]=='\0')
                break;
        }
        cout << a[i];
        i++;    
    }
    return 0;    
}