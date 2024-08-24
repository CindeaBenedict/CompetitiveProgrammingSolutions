#include <bits/stdc++.h>
using namespace std;

ifstream fin("canguri.in");
ofstream fout("canguri.out");

int main()
{
    int nr , s;
    int max=0 , nrmax;
    for(int i = 1 ; i <= 3 ; ++i)
    {
        fin >> nr >> s;
        if(s > max)
            max=s , nrmax=nr;
    }
    fout << nrmax << endl;
    int rez=800/max;
    if(rez*max!=800)
        rez++;
    fout << rez;
    return 0;    
}