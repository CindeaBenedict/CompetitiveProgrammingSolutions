/**
Cindea Benedict
Clasa a XI-a 
Colegiul National Petru Rares Beclean
IG cindeabenedict
*/


#include<iostream>
#include<cstring>
using namespace std;

char nr[18];
int lg,n,m,x[18];
long long maxim=0;

void VerifMaxim()
{
    int i;
    long long y=0;
    for(i=1;i<=n;i++)
        y=y*10+(nr[x[i]-1]-'0');
    if(y>maxim)
        maxim=y;
}

int Valid(int k)
{
    int i;
    for(i=1;i<k;i++)
        if(x[i]==x[k] || x[i]>x[i+1])
            return 0;
    return 1;
}

void Backtracking(int k)
{
    if(k>n)
        VerifMaxim();
    else
    {
        int i;
        for(i=1;i<=lg;i++)
        {
            x[k]=i;
            if(Valid(k))
                Backtracking(k+1);
        }
    }
}

int main()
{
    cin>>nr>>m;
    lg=strlen(nr);
    n=lg-m;
    Backtracking(1);
    cout<<maxim;
    return 0;
}