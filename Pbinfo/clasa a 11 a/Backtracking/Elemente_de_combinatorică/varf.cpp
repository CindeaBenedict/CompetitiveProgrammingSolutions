#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("varf.in");
ofstream fout("varf.out");
int a[30],x[30],n,ok=0;

void afish(int k)
{
    if(k<3)return;
    int i,nvf=0,nvai=0;
    for(i=2;i<=k-1;i++)
    {
        if(a[x[i]]>a[x[i-1]]&&a[x[i]]>a[x[i+1]])
            nvf++;
        if(a[x[i]]<a[x[i-1]]&&a[x[i]]<a[x[i+1]])
            nvai++;
    }
    if(nvf==1&&nvai==0)
    {
        for(int i=1;i<=k;i++)fout<<a[x[i]]<<" ";
            fout<<"\n";
        ok=1;
    }
}

void subm(int k)
{
    for(x[k]=x[k-1]+1;x[k]<=n;x[k]++)
    {
        afish(k);
        subm(k+1);
    }
}

int main()
{
    fin>>n;
    int i;
    for(i=1;i<=n;i++)fin>>a[i];
    subm(1);
    if(!ok)fout<<0;
    return 0;
}