#include <bits/stdc++.h>

using namespace std;

ifstream fin("2lan.in");
ofstream fout("2lan.out");

int main()
{
    int n;
    fin >> n;
    if(n == 0){
        fout << 1;
        return 0;
    }
    if(n % 4 == 0)
        fout << 6;
    else if(n % 4 == 3)
        fout << 8;
    else if(n % 4 == 2)
        fout << 4;
    else
        fout << 2;
    return 0;
}