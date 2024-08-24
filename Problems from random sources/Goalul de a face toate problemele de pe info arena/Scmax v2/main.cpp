#include<fstream>
using namespace std;
ifstream fin("scmax.in");
ofstream fout("scmax.out");
int i , n , st , dr , p , poz;
int x[100005] , v[100005] , ant[100005];

int catare_binara (int left , int right , int c)
{
    int poz = 0;
    while (left <= right)
    {
        int mij = (left + right) / 2;
        if (c > v[x[mij]])
        {
            poz = mij;
            left = mij + 1;
        }
        else
            right = mij - 1;
    }
    return poz;
}

void afisare (int k)
{
    if (ant[k])
        afisare (ant[k]);
    fout << v[k] << " ";
}

int main()
{
    fin >> n;
    for (i = 1 ; i <= n ; i++)
        fin >> v[i];
    x[1] = 1;
    st = 1;
    dr = 1;
    for (i = 2 ; i <= n ; i++)
    {
        int p = catare_binara (st , dr , v[i]);

        if(p == dr)
            dr++;
        x[p+1] = i;
        ant[i] = x[p];

    }
    x[1] = 1;
    fout << dr << endl;

    afisare (x[dr]);
      return 0;
}
