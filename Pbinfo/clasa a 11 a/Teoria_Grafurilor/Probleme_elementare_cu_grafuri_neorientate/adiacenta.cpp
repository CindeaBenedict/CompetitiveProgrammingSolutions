/*
Cîndea Alecsandru Benedict
Colegiul Național Petru Rareș Beclean
IG: cindeabenedict
*/

#include <fstream>
using namespace std;
ifstream fin("adiacenta.in");
ofstream fout("adiacenta.out");
int n , m , a[101][101] , p , r;
int main()
{

    fin >> n >> m;
    for(int k = 1 ; k <= m ; ++k)
    {
        fin >> p >> r;
        for(int i = 1 ; i <= n ; ++i)
        {
            for(int j = 1 ; j <= n ; ++j)
            {
                if(i == p && j == r)
                {
                    a[i][j] = 1;
                    a[j][i] = 1;
                }
            }
        }
    }
    for(int i = 1 ; i <= n ; ++i)
        {
            for(int j = 1 ; j <= n ; ++j)
                fout << a[i][j] << " ";
            fout << endl;
        }
    return 0;
}