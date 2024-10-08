#include <fstream>
#include <cstring>
#include <vector>
 
using namespace std;
 
char cuv[160][32];
int n, K; /// n-numarul de cuvinte
vector<int> L[200];
int grad[160]; /// gradele exterioare ale varfurilor
int dp[160];
 
void Citire()
{
    char text[1010], *p;
    char sep[] = " ,:;.!?-";
    bool gasit;
    int i;
    ifstream fin("lant2.in");
    fin >> K;
    fin.get();
    n = 0;
    while (fin.getline(text, 1001))
    {
        //cout << text << "\n";
        p = strtok(text, sep);
        while (p != NULL)
        {
            gasit = false;
            for (i = 1; i <= n && !gasit; ++i)
                if (strcmp(p, cuv[i]) == 0)
                    gasit = true;
            if (!gasit)
            {
                n++;
                strcpy(cuv[n], p);
            }
            p = strtok(NULL, sep);
        }
    }
    fin.close();
}
 
int Lewenshtein(char *p, char *q)
{
    int np, nq, i, j;
    int d[35][35];
    np = strlen(p);
    nq = strlen(q);
    for (i = 0; i <= np; i++)
        d[i][nq] = np - i;
    for (j = 0; j <= nq; j++)
        d[np][j] = nq - j;
    for (i = np - 1; i >= 0; i--)
        for (j = nq - 1; j >= 0; j--)
        {
            d[i][j] = 1 + d[i][j + 1];
            if (d[i][j] > 1 + d[i + 1][j])
                d[i][j] = 1 + d[i + 1][j];
            if (p[i] == q[j] && d[i][j] > d[i + 1][j + 1])
                d[i][j] = d[i + 1][j + 1];
        }
    return d[0][0];
}
 
void ConstrGraf()
{
    int i, j;
    for (i = 1; i < n; ++i)
        for (j = i + 1; j <= n; ++j)
            if (Lewenshtein(cuv[i], cuv[j]) <= K)
            {
                grad[i]++;
                L[i].push_back(j);
            }
}
 
void NrLanturi()
{
    int i, rez, nod;
    unsigned int j;
    dp[1] = 1;
    for (i = 1; i <= n; i++)
        for (j = 0; j < L[i].size(); j++)
        {
            nod = L[i][j];
            dp[nod] += dp[i];
        }
    rez = 0;
    for (i = 1; i <= n; i++)
        if (grad[i] == 0) rez += dp[i];
    ofstream fout("lant2.out");
    fout << rez << "\n";
    fout.close();
}
 
int main()
{
    Citire();
    ConstrGraf();
    NrLanturi();
    return 0;
}