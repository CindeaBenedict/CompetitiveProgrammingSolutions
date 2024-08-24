#include <bits/stdc++.h>
using namespace std;

ifstream fin("zmeu.in");
ofstream fout("zmeu.out");

int main()
{
    long long int n , m;
    fin >> n >> m;
    long long int t = n / (2 * m);
    fout << t << endl;
    fout << (t + 1) * m * 2 - n;
    return 0;
}