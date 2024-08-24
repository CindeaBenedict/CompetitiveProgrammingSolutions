#include <iostream>

using namespace std;

int n,v[11],x[11],p[11],lim;

void afisare()
{
    for (int i=1; i<=lim; ++i) cout<<v[x[i]];
    cout<<"\n";
}

void bectreching (int k)
{
    for (int i=1; i<=lim; ++i)
    {
        if (!p[i])
        {
            p[i]=1;
            x[k]=i;
            if(v[x[1]]!=0)
                if(k<lim) bectreching(k+1);
                else afisare();
            p[i]=0;
        }
    }
}

int main()
{
    cin>>n;
    while (n){
        v[++lim]=n%10;
        n/=10;
    }
    for (int i=1; i<=lim; ++i)
        for (int j=i+1; j<=lim; ++j)
            if (v[i]>v[j]) swap(v[i],v[j]);
    bectreching(1);

    return 0;
}