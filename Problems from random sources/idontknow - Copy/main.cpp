#include <fstream>

using namespace std;
ifstream fin("deminare.in");
ofstream fout("deminare.out");

int L, C, M, coordonate[502][502], nrdeminepelinie[502], V, x, y, NMineMax, nrMax, zCmpct, mut[250];

int main()
{
    fin >> V >> L >> C >> M;
    for(int i = 1; i <= M; i++){
        fin >> x >> y;
        coordonate[x][y] = 1;
        rdeminepelinie[x]++;

        if(rdeminepelinie[x] > NMineMax){
                NMineMax = rdeminepelinie[x];
                                 }

                                }
    if(V == 1){
        for(int i = 1; i <= L; i++){
            if(TMLinie[i] == NMineMax)
                fout << i << " ";
                                   }
            }
    else
    {
        for(int i = 1; i * i <= M; i++)
            if(M % i == 0){
                zCmpct++;
                mut[zCmpct] = i;

                    if(i * i != M){
                        zCmpct++;
                        mut[zCmpct] = M / i;
                    }
            }

        for(int i = 1; i <= L; i++){
            for(int j = 1; j <= C; j++)
                coordonate[i][j] += coordonate[i - 1][j] + coordonate[i][j - 1] - coordonate[i - 1][j - 1];

        for(int k = 1; k <= zCmpct; k++)

            for(int i = 1; i <= L - mut[k] + 1; i++)

                for(int j = 1; j <= C - M / mut[k] + 1; j++){
                    int rezolvare = coordonate[i + mut[k] - 1][j + M / mut[k] - 1] -coordonate[i + mut[k] - 1][j - 1] - coordonate[i - 1][j + M / mut[k] - 1] + coordonate[i - 1][j - 1];

                    if(rezolvare > nrMax)
                        nrMax = rezolvare;
                }
        }
        if(nrMax == 0){
            fout<< "-1";
        } else {
            fout << M - nrMax;
        }
    }
return 0;
}
