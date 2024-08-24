#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("combinari.in");
ofstream fout("combinari.out");

int n , m , x[20];

void afisare()
{
    for(int i = 1 ; i <= m ; i++)
        fout << x[i] << " ";
    fout << '\n';
}


void back(int k)
{
    for(int i = x[k - 1] + 1 ; i <= n ; i++)///se iau de la anterior + 1
    {
        x[k] = i;
        if(k == m) afisare();///daca s au pus [m]=1;
        else back(k + 1);
    }
}

int main()
{
    fin >> n >> m;
    back(1);
    return 0;
}
