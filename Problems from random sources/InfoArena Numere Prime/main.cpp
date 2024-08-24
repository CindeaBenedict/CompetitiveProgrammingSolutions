#include <iostream>
#include <fstream>
#include <bitset>
using namespace std;
bitset <10000000000> ciur;
int main()
{
    ifstream fin("prim.in");
    ofstream fout("prim.out");
    int n,cnt=0,i,j;
    long long  x;
    fin>>n;
    ciur[0]=ciur[1]=1;
    for(i=2;i<=100000000;i++)
    {
        if(ciur[i]!=1)
        {
            ciur[i]=0;
            cnt++;
            if(cnt==n+1)
            {
                x=i;
                break;
            }
            for(j=2;j*i<=10000000;j++)
                ciur[j*i]=1;
        }
    }
    fout<<x*x;
    return 0;
}
