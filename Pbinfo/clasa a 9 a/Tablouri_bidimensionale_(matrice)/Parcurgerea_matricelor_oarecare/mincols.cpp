#include <fstream>


using namespace std;
ifstream fin("mincols.in");
ofstream fout("mincols.out");
int main()
{
    int n,i,j,a[51][51];
        fin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        fin>>a[i][j];

    for(j=1;j<=n;j++){

          int  minim=a[1][j];
        for(i=2;i<=n;i++)
            if(a[i][j]<minim)
            minim=a[i][j];
            fout<<minim<<" ";

        }
    return 0;
}
