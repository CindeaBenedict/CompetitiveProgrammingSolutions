#include <bits/stdc++.h>
#include <cmath>
#define ull long long
using namespace std;
ifstream fin("nano.in");
ofstream fout("nano.out");
const ull dx=100000000,kdx=log10(dx),nmax=502;
struct NrMare{ull c[nmax],k;};
NrMare a,b,c;
char s[nmax];
int i,n,y;

void puneSirInNumar(NrMare &a, char *s)
{
    int i,l=strlen(s),k=kdx;
    char bu[kdx+2];
    memset(bu,0,kdx+2);
    for(i=0;l>=k;i++)
    {
        a.c[i]=atoi(strncpy(bu,s+l-k,k));
        a.k++;
        l-=k;
        memset(bu,0,kdx+2);
    }
    if(l>0)
    a.c[a.k++]=atoi(strncpy(bu,s,l));
}
void PuneNumarInSir(char *s, NrMare a)
{
    int i,j,ps=0;
    memset(s,0,a.k*kdx);
    for(i=0;i<a.k-1;i++)
    {
        for(j=0;j<kdx;j++)
        {
            s[ps++]='0'+a.c[i]%10;
            a.c[i]/=10;
        }
    }
    while(a.c[a.k-1])
    {
        s[ps++]='0'+a.c[a.k-1]%10;
        a.c[a.k-1]/=10;
    }
    reverse(s,s+strlen(s));
}
void afis(NrMare x)
{
    char s[nmax];
    PuneNumarInSir(s,x);
    cout<<s<<"\n";
}
void dec(NrMare &a)
{
    int i=0;
    a.c[i]--;
    while(a.c[i]<0)
    {
        a.c[i++]+=dx;
        a.c[i]--;
    }
    while(a.c[a.k-1]==0)a.k--;
}
void inc(NrMare &a)
{
    int i=0;
    a.c[i]++;
    while(a.c[i]==dx)
    {
        a.c[i++]=0;
        a.c[i]++;
    }
    if(a.c[a.k]>0)a.k++;
}
int comp(NrMare a, NrMare b)
{
    int i;
    if(a.k>b.k)return 1;
    if(a.k<b.k)return -1;
    for(i=a.k-1;a.c[i]==b.c[i]&&i>=0;i--);
    if(i<0)return 0;
    if(a.c[i]>b.c[i])return 1;
    return -1;
}
void div2(NrMare &a)
{
    int i,t=0;
    for(i=a.k-1;i>=0;i--)
    {
        a.c[i]+=t*dx;
        t=a.c[i]%2;
        a.c[i]/=2;
    }
    while(a.c[a.k-1]==0)a.k--;
}
NrMare patrat(NrMare a)
{
    int i,j;
    ull t;
    NrMare x;
    memset(&x,0,sizeof(x));
    x.k=2*a.k;
    for(i=0; i<a.k; i++)
        for(j=0; j<a.k; j++)
           x.c[i+j]+=a.c[i]*a.c[j];
    t=0;
    for(i=0;i<x.k;i++)
    {
        x.c[i]+=t;
        t=x.c[i]/dx;
        x.c[i]%=dx;
    }
    while(x.c[x.k-1]==0)x.k--;
    return x;
}
NrMare add(NrMare a, NrMare b)
{
    int i;
    NrMare x;
    ull t=0;
    memset(&x,0,sizeof(x));
    x.k=max(a.k, b.k);
    for(i=0;i<x.k;i++)
    {
        x.c[i]=a.c[i]+b.c[i]+t;
        t = x.c[i]/dx;
        x.c[i]%=dx;
    }
    if(t>0){x.c[x.k]=t;x.k++;}
    return x;
}

int ePatratPerfect(char *nr)
{
    int l=strlen(nr),gasit=0,co,i;
    NrMare st,dr,mi,pa,x;
    char s[nmax];
    memset(&st,0,sizeof(NrMare));
    memset(&dr,0,sizeof(NrMare));
    memset(&mi,0,sizeof(NrMare));
    memset(&x,0,sizeof(NrMare));
    if(l<18)
    {
        ull x=atoll(nr);
        return ((int)(sqrt(x))==sqrt(x));
    }
    else
    {
        l+=l%2;//aducem la nr par
        l/=2;
        s[0]='1';
        for(i=1;i<l;i++)s[i]='0';
        s[i]=0;

        puneSirInNumar(st,s);
        for(i=0;i<l;i++)s[i]='9';
        s[i]=0;
        puneSirInNumar(dr, s);
        puneSirInNumar(x, nr);
        do
        {
            mi=add(st,dr);
            div2(mi);
            pa=patrat(mi);
            co=comp(pa,x);
            if(co==0)return 1;
             else if(co==1){dr=mi;dec(dr);}
                    else {st=mi;inc(st);}
        }while(gasit==0 && comp(st,dr)<=0);
    }
    return 0;
}

int main()
{
    fin>>n;
    for(i=1; i<=n; i++)
    {
        fin >> y;
        fin.get();
        fin.getline(s,nmax);
        if(ePatratPerfect(s))
            fout<<s<<"\n";
    }

    return 0;
}