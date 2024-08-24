#include <fstream>
using namespace std;
ifstream fin("siruri.in");
ofstream fout("siruri.out");
int x[16],n,p[16],m;
bool corect()
{
    for(int i=2; i<=m; i++)
        if(x[i]-x[i-1]>2)
            return false;
    return true;
}
void afisare()
{
    if(corect())
    {
        for(int i=1; i<=m; i++)
            fout<<x[i]<<" ";
        fout<<endl;
    }
}

int back(int k)
{
    for(int i=x[k-1]+1; i<=n; i++)
    {
        if(!p[i])
        {
            x[k]=i;
            p[i]=1;
            if(k==m)
                afisare();
            else back(k+1);
            p[i]=0;
        }
    }
}
int main()
{
    fin>>n>>m;
    back(1);
    return 0;
}
