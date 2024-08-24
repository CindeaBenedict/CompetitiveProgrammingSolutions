#include <fstream>
using namespace std;
ifstream fin("maxmat.in");
ofstream fout("maxmat.out");

int main()
{
    int n , m , a[103][103] , aux=0, maxim;
    fin >> n >> m;
    for(int i = 0 ; i < n ; ++i)
        for(int j = 0 ; j < m ; ++j) fin >> a[i][j];
    for(int i = 0 ; i < n ; ++i)
    {
        maxim = -1001;
        for(int j = 0 ; j < m ; ++j)
        {
            if(a[i][j] > maxim)
            {
                maxim = a[i][j];
                aux= j;
            }
        }
        fout << maxim << " " << aux + 1 << endl;
    }

   

    return 0;
}