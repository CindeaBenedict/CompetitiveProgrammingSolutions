#include <fstream>

using namespace std;

short n, v[41];

ifstream fin("partitiinumar.in");
ofstream fout("partitiinumar.out");

void afisare(int k)
{
    for (int i = 1; i <= k; i++)
        fout << v[i] << ' ';
    fout << '\n';
}

void backtrack(int k, int sum)
{
    for (int i = v[k - 1]; i <= n; i++)
    {
        v[k] = i;
        sum += v[k];
        if (sum <= n)
            if (sum == n)
                afisare(k);
            else
                backtrack(k + 1, sum);
        sum -= v[k];
    }
}

int main()
{
    fin >> n;
    v[0] = 1;
    backtrack(1, 0);
    return 0;
}