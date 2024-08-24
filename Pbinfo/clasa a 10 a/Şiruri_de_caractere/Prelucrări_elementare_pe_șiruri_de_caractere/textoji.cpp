#include <fstream>
#include <cstring>
#define InFile "textoji.in"
#define OutFile "textoji.out"
#define NMax  1001
#define LgMax 26

using namespace std;

char prg[NMax];
ifstream fin(InFile);
ofstream fout(OutFile);
char cuv[NMax][LgMax];
int  Max, nrl, LgLinie;
void afiseaza_paragraf(void);
void afiseaza_linie(int);

int main()
{
    fin>>Max; fin.get();
    int gata=0;
    while (!gata)
    {fin.getline(prg,NMax);
        if (!fin.good()) gata=1;
        else
            afiseaza_paragraf();
    }
    fin.close(); fout.close();
    return 0;
}

void afiseaza_paragraf()
{char *p;
    int LgCuv;
    LgLinie=-1; nrl=0;
    p=strtok(prg," ");
    while (p)
    {LgCuv=strlen(p);
        if (LgLinie+LgCuv+1<=Max)
        {strcpy(cuv[nrl],p); nrl++; LgLinie+=LgCuv+1;}
        else
        {afiseaza_linie(0);
            nrl=1; LgLinie=LgCuv; strcpy(cuv[0],p);}
        p=strtok(NULL," ");
    }
    afiseaza_linie(1);
}

void afiseaza_linie(int u)
{
    int i, j, cate, rest, nrsp;
    if (u)
        for (i=0; i<nrl-1; i++) fout<<cuv[i]<<' ';
    else
    {cate=Max-LgLinie; rest=cate%(nrl-1); nrsp=cate/(nrl-1);
        for (i=0; i<nrl-1;i++)
        {fout<<cuv[i];
            for (j=0; j<=nrsp;j++) fout<<' ';
            if (rest) {fout<<' ';rest--;}
        }
    }
    if (nrl>0) fout<<cuv[nrl-1]<<endl;
    else fout<<endl;
}