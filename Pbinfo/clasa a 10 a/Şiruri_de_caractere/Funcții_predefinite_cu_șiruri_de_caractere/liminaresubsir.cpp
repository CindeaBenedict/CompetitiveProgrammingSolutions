#include <iostream>
using namespace std;

int main()
{
    char a[260] , b[260];
    cin.getline(a , 260);
    cin.getline(b , 260);
    int i = 0 ;
    while(a[i]!='\0')
    {
        bool ok = true;
        int j = 0 ;
        while(b[j]!='\0')
        {
            if(a[i+j]!=b[j])
                ok=false;
            j++;
        }
        if(ok==true)
            i+=j-1;
        else
            cout << a[i];
        i++;
    }
    return 0;    
}