#include <iostream>
#include <fstream>
#include <math.h>
#include <bitset>
using namespace std;
ifstream fin("difprim.in");
ofstream fout("difprim.out");

bitset <10000005> ciur;

int main()
{
    int a, b, prim_precedent = 0, maxi=-1, max_prim = 0;
    fin>>a>>b;
    for(int i=4;i<=b;i+=2)
       ciur[i]=1;
    int x = (int)(sqrt(b));
    for(int i=3; i<=x; i+=2)
        if(ciur[i]==0)
            for(int j=i+i; j<= b; j=j+i)
                ciur[j]=1;

    for(int i=a; i<=b; ++i)
        if or(int i=a; i<=b; ++i)
        if(ciur[i]==0)
        {
            if(prim_precedent != 0)
                if(maxi<i-prim_precedent){
                    maxi = i - prim_precedent;
                    max_prim = prim_precedent;
                }
            prim_precedent = i;
        }
    if(maxi== -1)
        fout<<maxi<<'\n';
    else
        fout<<max_prim<<' '<<max_prim + maxi<<'\n';
        return 0;}
