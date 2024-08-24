#include <iostream>
#include <fstream>

using namespace std;

long long int n, m, n1, n2, counter;

struct rare
{
    int i, j, v;
};

rare a[300000], b[300000], c[300000];

static bool cmp(rare x, rare y)
{
    return x.i < y.i || (x.i == y.i && x.j < y.j);
}

int main(void)
{
    long long int i, j;

    ifstream fin("matrice_rara.in");
    ofstream fout("matrice_rara.out");

    fin >> n >> m >> n1 >> n2;

    for(i = 0; i < n1; i++)
        fin >> a[i].i >> a[i].j >> a[i].v;
    for(i = 0; i < n2; i++)
        fin >> b[i].i >> b[i].j >> b[i].v;

    i = 0; j = 0;

    while(i < n1 && j < n2) {
        if(cmp(a[i], b[j]))
            c[++counter] = a[i++];
        else if(cmp(b[j], a[i]))
            c[++counter] = b[j++];
        else {
            if(a[i].v + b[j].v != 0) {
                c[++counter] = a[i];
                c[counter].v += b[j].v;
            }
            i++;
            j++;
        }
    }

    while(i < n1)
        c[++counter] = a[i++];
    while(j < n2)
        c[++counter] = b[j++];

    fout << counter << '\n';

    for(i = 1; i <= counter; i++)
        fout << c[i].i << " " << c[i].j << " " << c[i].v << '\n';

    return 0;
}