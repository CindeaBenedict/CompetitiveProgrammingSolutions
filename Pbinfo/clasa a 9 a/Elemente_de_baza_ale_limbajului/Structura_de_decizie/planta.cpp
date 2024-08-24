#include <bits/stdc++.h>
using namespace std;
ifstream f("planta.in");
ofstream g("planta.out");
int lg,a,b,zile;
int main()
{   f>>lg>>a>>b>>zile;
    if(zile%2==0) g<<lg+(a-b)*(zile/2);
    else g<<lg+a+(a-b)*(zile/2);
    return 0;

}