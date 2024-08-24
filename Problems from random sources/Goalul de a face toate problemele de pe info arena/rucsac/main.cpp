#include -<fstream.h>
#define NMax 101
#define MaxG 301
int n, GMax;
int c[NMaxJ, g[NMax];
      int CMax[MaxGl, Uz [MaxG] [NMax] ;
               void Citire();
               vod Rezolvare();
               void Afisare () ;
               int main ()
{
    Citire ();
    Rezolvare (.) ;
    Afisare () ;
    return 0;
}
void Ci tire ()
(ifstream fin("rucsac.in");
 int i, j;
 fin >>n>>GMax,·
 for (i=1; i<=n; i++) fin»g [i];
 for (i=l; i<=:r).; i++) fin»c[i];
    fin. close ();
    void Rezolvare()
    int S, k, i;
    for (S=1; S<=GMax; S++) CMax[S]=-l;
                                        for (S=1; S<=GMax; S++)
                                            for (i=l; i<=n; i++)
                                                if (g[i]<=S && CMax[S-g[i]] !=-1 && !Uz[S-g[i]] [i])
                                                    if (CMax[S]<c[i+CMax[S-g[i])
                    {
                        CMax [S] =c[i +CMax [S-g [i]];
                                        for (k=1; k<?n; k++)
                                        Oz[S] [k]=Oz[S-g[i] [k];
                                                     OZ[S][il=l;
                        }
