#include <fstream>
using namespace std;
#define input "rj.in"
#define output "rj.out"
#define maxim 1000
#define nv 8
int  n,m,xr,yr,xj,yj;
char v[maxim][maxim];
int r[maxim][maxim];
int dv[nv]={0, 1, 0, -1, -1, 1, -1, 1};
int dc[nv]={1, 0, -1, 0, -1, 1,  1,-1};
void citire(void)
{
    int i, k;
    char c;
    ifstream f(input);
    f>>n>>m;
    for (i=0; i<=n+1; i++) v[i][0]=v[i][m+1]='X';
    for (i=0; i<=m+1; i++) v[0][i]=v[n+1][i]='X';
    f.get(c);
    for (i=1; i<=n; i++)
    {for (k=1; k<=m; k++)
        {f.get(c); v[i][k]=c;
            if (v[i][k]=='R') {xr=i; yr=k; v[i][k]=' ';}
            if (v[i][k]=='J') {xj=i; yj=k; v[i][k]=' ';}
        }
        f.get(c);}
    f.close();
}

void parcurge (int x0, int y0, int d[maxim][maxim])
{
    struct Punct {int v, c;} C[maxim*maxim], p;
    int inc=0, sf=0, i, k;
    for (i=0; i<=n+1; i++)
        for (k=0; k<=m+1; k++) d[i][k]=-1;
    C[0].v=x0; C[0].c=y0; d[x0][y0]=1;
    while (inc<=sf)
    {
        p=C[inc++];
        for (i=0; i<nv; i++)
            if (v[p.v + dv[i]][p.c + dc[i]] == ' ') {
                if (d[p.v + dv[i]][p.c + dc[i]] == -1) {
                    d[p.v + dv[i]][p.c + dc[i]] = 1 + d[p.v][p.c];
                    C[++sf].v = p.v + dv[i];
                    C[sf].c = p.c + dc[i];
                }
            }
    }
}

void afisare(int j[maxim][maxim])
{
    ofstream f(output);
    int tmin=maxim*maxim+5, xmin=-1, ymin=-1, i, k;
    for (i=1; i<=n; i++)
        for (k=1; k<=m; k++)
            if (r[i][k]==j[i][k])
                if (r[i][k]<tmin && r[i][k]!=-1)
                {tmin=r[i][k]; xmin=i; ymin=k;}
    f<<tmin<<' '<<xmin<<' '<<ymin<<endl;
    f.close();
}

int main(){
    int j[maxim][maxim];
    citire();
    parcurge(xr, yr, r);
    parcurge(xj, yj, j);
    afisare(j);

}

