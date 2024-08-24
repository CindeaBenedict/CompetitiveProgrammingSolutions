#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("produscartezian1.in");
ofstream fout("produscartezian1.out");

int n , m , x[10];

void afisare()
{
    for(int i = 1 ; i <= m ; i++)
        fout << x[i] << ' ';
    fout << '\n';
}

void back(int k)
{
    if(k == m + 1)
    {
        afisare();
        return ;
    }
    else
    {
        x[k] = 0;
        while(x[k] < n)
        {
            x[k]++;
            back(k + 1);
        }
    }
}

int main()
{   fin >> n >> m;
    back(1);
}