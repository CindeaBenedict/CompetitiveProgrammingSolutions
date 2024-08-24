#include <bits/stdc++.h>
using namespace std;

ifstream fin("permutarecuvant.in");
ofstream fout("permutarecuvant.out");

int main()
{
    char s[21];
    fin >> s;

    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = i; j < strlen(s); j++) fout << s[j];
        for (int j = 0; j < i; j++) fout << s[j];

        fout << ' ';
    }

    return 0;
}