#include <iostream>
#include <cstring>

using namespace std;

char s[101],cod[101],c[101],aux;

int main ()
{
    
    cin>>s;
    cin>>c;
    if(strlen(s)==strlen(c))
    {
        for(int i=0; i<strlen(s); i++)
        {
            if(c[i]%2==0)
            {
                for(int j=i; j>=0; j--)
                {
                    aux=cod[j];
                    cod[j+1]=aux;
                }
                cod[0]=s[i];
            }
            else
            {
                cod[i]=s[i];
            }
        }
    }
    else cout<<"cod incorect";
    cout<<cod;
    return 0;
}