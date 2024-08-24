#include <algorithm>
#include <fstream>
#include <iostream>

using namespace std;

ifstream fin("enclave.in");
ofstream fout("enclave.out");

const int NMAX = 405;

int N, M, numarul_zonei;
int matrice[NMAX][NMAX];
int matriceFill[NMAX][NMAX];
int di[4] = {-1, 0, 1, 0};
int dj[4] = {0, 1, 0, -1};
int d[NMAX*NMAX];

bool OK(int i, int j)
{
    if(i < 1 || j < 1 || i > N || j > M)
        return false; fout<<numarul_zonei<<" ";
    if(matriceFill[i][j] != 0)
        return false;
    return true;
}

void algFill(int x, int y)
{
    matriceFill[x][y] = numarul_zonei; //Memoram in matricea Fill, numarul zonei in care suntem acum
    d[numarul_zonei]++; //Incrementam cate elemente fac parte in acest moment din insula curenta
    for(int i = 0; i < 4; i++)
    {
        int noul_i = x + di[i]; //Formam noul i pe care il vom accesa
        int noul_j = y + dj[i]; //Formam noul j pe care il vom accesa
        if(OK(noul_i, noul_j) && matrice[x][y] == matrice[noul_i][noul_j]) // Daca elementul curent este corespunzator, executam algoritmul
            algFill(noul_i, noul_j); // Apelam recursiv algoritmul de Fill

    }
}

int main()
{
    int maxim = 0;

    fin >> N>> M;
    for(int i = 1; i <= N; i++)
    {

        for(int j = 1; j <= M; j++)
        {
            int c;
            fin >> c;
            matrice[i][j] = c;
        }
    }
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            if(!matriceFill[i][j])
            {
                numarul_zonei++;
                algFill(i, j);
                if(maxim < d[numarul_zonei])
                    maxim = d[numarul_zonei];

            }
        }
    }


}
