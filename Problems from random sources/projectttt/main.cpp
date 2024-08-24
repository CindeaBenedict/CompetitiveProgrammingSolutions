#include <fstream>
#include <algorithm>
using namespace std;

ifstream cin("roboti3.in");
ofstream cout("roboti3.out");

const int NMAX = 100003;
int v[NMAX], sol[NMAX], st, dr;

void mers()
{
    sol[st] = sol[dr - 1];
    st--;
    dr--;
}
int main()
{
    int cer, n, i, ant;
    cin >> cer >> n >> v[1];
    ant = v[1];
    int secv = 1, nrs = 0, lmax = 0, s1, s2;
    for (i = 2; i <= n; i++)
    {
        cin >> v[i];
        if (ant < v[i])
            secv++;
        else
        {
            lmax = max(lmax, secv);
            nrs++;
            if (nrs == 1)
                s1 = secv;
            s2 = secv;
            secv = 1;
        }
        ant = v[i];
    }
    lmax = max(lmax, secv);
    nrs++;
    s2 = secv;
    if (v[1] > ant)
        lmax = max(lmax, s1 + s2);
    if (cer == 1)
        cout << lmax;
    else
    {
        sort(v + 1, v + n + 1);
        sol[1] = sol[n + 1] = v[1];
        int st = 1, dr = n + 1;
        for (i = 2; i <= n; i++)
            if (sol[st] <= sol[dr])
                sol[++st] = v[i];
            else
                sol[--dr] = v[i];
        for (i = 1; i <= n; i++)
            cout << sol[i] << " ";
    }
}
