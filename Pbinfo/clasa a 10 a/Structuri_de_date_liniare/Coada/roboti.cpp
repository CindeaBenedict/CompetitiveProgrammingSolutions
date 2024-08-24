#include <fstream>

using namespace std;

ifstream fin("roboti.in");

ofstream fout("roboti.out");

const int di[] = {-1, 0, 1, 0};

const int dj[] = {0, 1, 0, -1};

int n,m,a[1002][1002], x[1000001], y[1000001];

int ip, jp, is, js;

bool inmatrix (int i, int j)
{

    return i>=1 && i<=n && j>=1 && j<=m;

/// vectorul in matrix prin care verificam daca putem flagui ce poate sau nu sa apartina matricii finale
}

int main()
{
    fin>>n>>m;
    for (int i=1; i<=n; ++i)
    {
        for(int j=1; j<=m; ++j)
        {
            fin >> a[i][j];
        }
    }
    fin >> ip >> jp >> is >> js;
    int st = 1;
    int dr = 1;
    a[ip][jp] = 1;
    x[1] = ip;
    y[1] = jp;
    while( st <= dr && a[is][js] == 0)
    {
        int i = x[st];
        int j = y[st];
        for (int k=0; k<4; ++k)
        {
            int ii = i +di[k];
            int jj = j +dj[k];
            if(inmatrix (ii,jj) && a[ii][jj] == 0)
            {
                ++dr;
                x[dr] = ii;
                y[dr] = jj;
                a[ii][jj] = a[i][j] + 1;
        }
        }
        ++st;
    }
    fout<<a[is][js]-1;
    return 0;
}
