#include <bits/stdc++.h>

using namespace std;
ifstream fin("minlex.in");
ofstream fout("minlex.out");

int main()
{
    int n, k=0, mini;
    char v[1000010], aux[1000010];
    fin>>v;
    n=strlen(v);

    strcpy(aux, v);
    strncat(v, v, n);
    for(k=0; k<n-1; k++)
    {
        if(strncmp(aux, v+k, n)>0)
        {
            strncpy(aux, v+k, n);
            mini=k;
        }
    }
    fout<<mini;
    return 0;
}