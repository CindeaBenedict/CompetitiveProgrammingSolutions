#include <fstream>
int main()
{
    unsigned t, m, phi[999999];
    unsigned long long x = 0;
    std::ifstream f("fractii.in");
    f >> m;
    f.close();
    for (t = 2; t <= m;phi[t]=t, t++);
    for (t = 2; t <= m; t++)
        if (phi[t] == t)
           for (unsigned j = t; j <= m; phi[j] /= t,phi[j]*=t - 1,j+=t);
    for (t = 2; t <= m; x+=phi[t++]*2);
    std::ofstream g("fractii.out");
    g << x + 1;
    g.close();
}
