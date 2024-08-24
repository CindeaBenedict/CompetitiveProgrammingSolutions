#include <fstream>
using namespace std;
int main()
{
    int n,cnt=0;
    ifstream fin("nrdiv.in");
    ofstream fout("nrdiv.out");
    fin>>n;
    for(int i=1;i<=n;i++)
        if(n%i==0) cnt++;
        
    fout<<cnt;
    return 0;
}