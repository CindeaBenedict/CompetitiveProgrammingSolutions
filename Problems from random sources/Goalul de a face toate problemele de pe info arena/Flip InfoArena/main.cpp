#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("flip.in");
ofstream fout ("flip.out");
int n,m,v[17][17],s,t,smax;
int main()
{
    fin >>n>>m;
    for (int i=1;i<=n;i++)
        {for (int j=1;j<=m;j++)
             {fin >>v[i][j];}}
    for (int x=0;x<(1<<n);x++)
        {t=0;
         for (int j=1;j<=m;j++)
             {s=0;
              for (int i=1;i<=n;i++)
                  {if ((x&(1<<(i-1)))>0) s=s-v[i][j];
                   else s=s+v[i][j];}
              if (s<0) s=s*(-1);
              t=t+s;}
         smax=max(smax,t);}
    fout <<smax;
    return 0;
}
