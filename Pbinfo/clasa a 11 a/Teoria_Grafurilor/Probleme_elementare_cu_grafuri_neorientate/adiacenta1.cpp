/*
Cîndea Alecsandru Benedict
Colegiul Național Petru Rareș Beclean
IG: cindeabenedict
*/

#include <iostream>
#include <fstream>
using namespace std;

ifstream in("adiacenta1.in");
ofstream out("adiacenta1.out");

int x[101][101];

int main() {
    int n, m, max=-1;
    while(in>>n>>m) {
        x[n][m] = 1, x[m][n] = 1;
        if(n>max) max = n;
        if(m>max) max = m;
    }
    for(int i=1; i<=max; i++) {
        for(int j=1; j<=max; j++)
            out<<x[i][j]<<" ";
        out<<endl;
    }
}