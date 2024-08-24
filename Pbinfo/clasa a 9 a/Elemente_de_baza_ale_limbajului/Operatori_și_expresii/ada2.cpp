#include <bits/stdc++.h>
using namespace std;

ifstream fin("coada2.in");
ofstream fout("coada2.out");

int main()
{
    long long int x , y , z;
    fin >> x >> y >> z;
    if(x >= y || x >= z)
        fout << "-1";
    else
        fout << y+z-x;
    return 0;
}