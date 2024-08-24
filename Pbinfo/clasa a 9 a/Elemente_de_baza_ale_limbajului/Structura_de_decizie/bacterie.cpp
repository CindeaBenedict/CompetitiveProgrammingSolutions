#include <bits/stdc++.h>
using namespace std;
ifstream fin("bacterie.in");
ofstream fout("bacterie.out");
int main()
{
    unsigned long long s,m,n;
    fin>>n>>m;
    if(n<m) s=n*(n+1)/2;
    else s=m*(m+1)/2;
    fout<<n*m-s;
    return 0;
}