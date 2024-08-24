#include <fstream>

using namespace std;
ifstream fin("sumcolmax.in");
ofstream fout("sumcolmax.out");
int main()
{
    int n , a[27][27] , indice = 0 , m , smax = -100001;
    fin >> n >> m;
    for(int i = 0 ; i < n ; ++i)
        for(int j = 0 ; j < m ; ++j) fin >> a[i][j];
    for(int j = 0 ; j < m ; ++j)
    {
        int s = 0;
        for(int i = 0 ; i < n ; ++i)
        {
            s += a[i][j];
        }
        if ( s > smax) {smax = s;indice = j;}
    }
    for(int i = 0 ; i< n ; ++i) fout<<a[i][indice]<<" ";

  

    return 0;
}