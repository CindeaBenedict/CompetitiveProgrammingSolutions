#include <bits/stdc++.h>
using namespace std;
ifstream fin("hotel.in");
ofstream fout("hotel.out");

#define cin fin
#define cout fout
long long int c,k,m,n,z,i,v[10001],t[10001],cnt,ok,j,sum,tu,poz[10001],v1[10001],mam=1,st,dr,maxi,suma,st1;
int main()
{
    cin>>c>>k>>m>>n>>z;
    if(c==1)
    {
        for(i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        sort(v+1,v+n+1);
        cnt=1;
        j=k;
        for(i=1;i<=n;i++)
        {
            if(t[cnt]<=v[i]&&v[i]+m-1<=z){t[++j]=v[i]+m;cnt++;sum++;}
        }
        cout<<sum;
    }
    if(c==2)
    {
        for(i=1;i<=n;i++)
        {
            cin>>v[i];
            poz[i]=i;
        }
        ok=0;
        while(!ok)
        {
            ok=1;
            for(i=1;i<n;i++)
            {
                if(v[i]>v[i+1])
                {
                    swap(v[i],v[i+1]);
                    swap(poz[i],poz[i+1]);
                    ok=0;
                }
            }
        }

        cnt=1;
        j=k;
        for(i=1;i<=n;i++)
        {
            if(t[cnt]<=v[i]&&v[i]+m-1<=z){t[++j]=v[i]+m;cnt++;cout<<poz[i]<<" ";}
        }
    }
    if(c==3)
    {
        for(i=1;i<=n;i++)
        {
            cin>>v[i];
            poz[i]=i;
        }
        ok=0;
        while(!ok)
        {
            ok=1;
            for(i=1;i<n;i++)
            {
                if(v[i]>v[i+1])
                {
                    swap(v[i],v[i+1]);
                    swap(poz[i],poz[i+1]);
                    ok=0;
                }
            }
        }

        cnt=1;
        j=k;
        for(i=1;i<=n;i++)
        {
            if(t[cnt]<=v[i]&&v[i]+m-1<=z){t[++j]=v[i]+m;cnt++;}
            else {v1[mam]=poz[i];mam++;}
        }
        if(mam!=1)
        {
        sort(v1+1,v1+mam);
        suma=1;
        for(i=2;i<mam;i++)
        {
            if(v1[i]-1==v1[i-1])
            {
            if(suma==1)st1=v1[i-1];
            suma++;
            }
            else
            {
                if(maxi<suma){maxi=suma;st=st1;}
                suma=1;
            }
        }
        if(maxi<suma&&st1!=0){maxi=suma;st=st1;}
        cout<<maxi<<" "<<st;}
        else cout<<0<<" "<<0;
    }
    return 0;
}