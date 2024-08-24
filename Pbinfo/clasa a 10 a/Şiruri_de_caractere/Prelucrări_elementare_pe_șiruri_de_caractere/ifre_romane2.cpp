#include <bits/stdc++.h>
#define LMAX 1000
using namespace std;
char roman[LMAX]="";

void Roman(int numar) /// Tranforma numar in scrierea romana
{
    int num[]={1,4,5,9,10,40,50,90,100,400,500,900,1000,4000,5000,9000,10000,40000,50000,90000,100000,400000,500000,900000,1000000};
    char sym[25][7]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M",
                    "M(V)","(V)","M(X)","(X)","(X)(L)","(L)","(X)(C)","(C)","(C)(D)","(D)","(C)(M)","(M)"};
    int i=24;
    while(numar>0)
    {
        int div=numar/num[i];
        numar%=num[i];
        while(div--)
            strcat(roman,sym[i]);
        --i;
    }
}

int main()
{
    int c;
    ifstream f("cifre_romane2.in");
    f>>c;
    ofstream g("cifre_romane2.out");
    if(c==1) /// Vom afisa numarul cu cifre romane
    {
        int a;
        f>>a;
        Roman(a);
        g<<roman;
    }
    else /// Vom afisa numarul cu cifre arabe
    {
        char nr[LMAX],NR[LMAX];
        f>>NR;
        int Lnr=0,LNR=strlen(NR);
        for(int i=0;i<LNR;++i)
            if(i&&NR[i-1]=='(')
                switch(NR[i])
                {
                    case 'V' : nr[Lnr++]='0';break;
                    case 'X' : nr[Lnr++]='1';break;
                    case 'L' : nr[Lnr++]='2';break;
                    case 'C' : nr[Lnr++]='3';break;
                    case 'D' : nr[Lnr++]='4';break;
                    case 'M' : nr[Lnr++]='5';break;
                }
            else
                if(NR[i]!='('&&NR[i]!=')')
                    nr[Lnr++]=NR[i];
        nr[Lnr]='\0';
        int na=0,v=0;
        char C[]="IVXLCDM012345"; /// Inlocuim (V), (X), (L), (C), (D), (M) cu cifrele 0 1 2 3 4 5 si memoram in nr
        for(int i=0;i<Lnr;++i)
        {
            switch(nr[i])
            {
                case 'I' : v=1;break;
                case 'V' : v=5;break;
                case 'X' : v=10;break;
                case 'L' : v=50;break;
                case 'C' : v=100;break;
                case 'D' : v=500;break;
                case 'M' : v=1000;break;
                case '0' : v=5000;break;
                case '1' : v=10000;break;
                case '2' : v=50000;break;
                case '3' : v=100000;break;
                case '4' : v=500000;break;
                case '5' : v=1000000;break;
            }
            if(i==Lnr-1)
                na+=v;
            else
                if(strchr(C,nr[i+1])-C<=strchr(C,nr[i])-C)
                    na+=v;
                else
                    na-=v;
        }
        Roman(na);
        bool ok=true;
        for(int i=0;i<LNR;++i)
            if(NR[i]!=roman[i])
            {
                ok=false;
                break;
            }
        if(ok)
            g<<na<<'\n';
        else
            g<<"Numar invalid\n";;
    }
    return 0;
}