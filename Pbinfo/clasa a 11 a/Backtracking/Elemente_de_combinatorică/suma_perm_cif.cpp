#include<iostream>
using namespace std;

int n,nrcif=0,cif[9],x[9],y;
long long sum=0;

void DescompCifre(int n)
{ 
    // stocam cifrele lui n intr-un vector
    if(n)
    {
        DescompCifre(n/10);
        nrcif++;
        cif[nrcif]=n%10;
    }
}

void FormareNumar()
{
    // formam numarul din rearanjarea cifrelor lui n
    int i;
    y=0;
    for(i=1;i<=nrcif;i++)
        y=y*10+cif[x[i]];
}

void Suma()
{
    FormareNumar();
    sum=sum+y;
}

int Valid(int k)
{
    int i;
    for(i=1;i<k;i++)
        if(x[i]==x[k])
            return 0;
    return 1;
}

void Backtracking(int k)
{
    if(k>nrcif)
        Suma();
    else
    {
        int i;
        for(i=1;i<=nrcif;i++)
        {
            x[k]=i;
            if(Valid(k))
                Backtracking(k+1);
        }
    }
}

int main()
{
    cin>>n;
    DescompCifre(n);
    Backtracking(1);
    cout<<sum;
    return 0;
}