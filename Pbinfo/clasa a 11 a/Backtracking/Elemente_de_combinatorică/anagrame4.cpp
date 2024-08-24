#include <iostream>
#include <cstring>

using namespace std;

char cuv[12],s[12];
int x[12],p[12],lim,n;

bool eVoc (char a)
{
    return a=='a' || a=='e' || a=='o' || a=='i' || a=='u';
}

void afisare()
{
    int pp=1;
    for (int i=1; i<=n; ++i)
    {
        if(!eVoc(cuv[i-1])) cout<<cuv[i-1];
        else cout<<s[x[pp++]];
    }
    cout<<"\n";
}

void bectreching(int k)
{
    for (int i=1; i<=lim; ++i)
    {
        if (!p[i])
        {
            p[i]=1;
            x[k]=i;
            if (k<lim) bectreching(k+1);
            else afisare();
            p[i]=0;
        }
    }
}

int main()
{
    cin>>cuv;
    n=strlen(cuv);
    for (int i=0; i<n; ++i){
        if (eVoc(cuv[i])) s[++lim]=cuv[i];
    }
    for (int i=1; i<=lim; ++i)
        for (int j=1; j<=lim; ++j)
            if (s[i]<s[j]) swap(s[i],s[j]);
    bectreching(1);


    return 0;
}