/*

Pirnog Theodor Ioan
Colegiul National "B. P. Hasdeu"

*/

#include <fstream>

using namespace std;

ifstream cin("tabela.in");
ofstream cout("tabela.out");

int tabela(int n, int m, long long latura){

    if(latura == 1)
        return 0;

    int ans = 0;
    latura >>= 1;

    if(n > latura && m > latura)
        ans -= 2 * latura;

    if(n > latura){

        ans += latura;
        n -= latura;

    }

    if(m > latura){

        ans += latura;
        m -= latura;

    }

    return ans + tabela(n, m, latura);

}

int main(){

    long long latura = (1LL << 32);
    int n, m;

    cin >> n >> m;
    cout << tabela(n, m, latura);

}