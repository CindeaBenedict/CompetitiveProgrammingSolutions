#include <iostream>
#include <cstring>

using namespace std;

char s[21];
int x[21],p[21],c,n;

void afisare ()
{
    for (int i=1; i<=n-c; ++i) cout<<s[x[i]-1];
    cout<<"\n";
}

void bectreching (int k)
{
    for (int i=x[k-1]+1; i<=n; ++i)
    {
        x[k]=i;
        if (k<n-c) bectreching(k+1);
        else afisare();;
    }
}

int main()
{
    cin>>s>>c;
    n=strlen(s);
    bectreching(1);

    return 0;
}