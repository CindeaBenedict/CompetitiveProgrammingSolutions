#include <fstream>
#include <cmath>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    ifstream fin ("roboti3.in");
    ofstream fout ("roboti3.out");
    unsigned long long secv=0,best_secv=0,x,max=INT_MIN,n,a[1001],v;
    fin>>v;
    fin>>n;
    if(v==1){
    for(int i=1;i<=n;i++)
    {
        fin>>a[i];
        if(a[i]>max) {max=a[i];
        secv++;
        if(secv>best_secv) best_secv=secv;}
        else secv = 0;
    }
    fout<<best_secv;
    }
    return 0;
