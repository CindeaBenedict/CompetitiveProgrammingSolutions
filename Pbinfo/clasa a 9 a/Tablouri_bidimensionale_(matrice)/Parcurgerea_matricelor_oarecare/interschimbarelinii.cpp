#include <bits/stdc++.h>
using namespace std;
ifstream fin("interschimbarelinii.in");
ofstream fout("interschimbarelinii.out");
int main()
{
    int n , m , a[25][25] , mini = 10001 , maxi = 0 , lmax = 0 , lmin = 0;
    fin >> n >> m;
    for(int i = 0 ; i < n ; ++i)
        for(int j = 0 ; j < m ; ++j)
           {
               fin >> a[i][j];
               if(a[i][j] > maxi)
                {
                    maxi = a[i][j];
                    lmax=i;
                }
                if(a[i][j] < mini)
                {
                    mini=a[i][j];
                    lmin=i;
                }
           }
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            if(i==lmax)
            fout << a[lmin][j] << " ";
            if(i==lmin)
            fout << a[lmax][j] << " ";
            if(i!=lmax && i!=lmin)
            fout << a[i][j] << " ";
        }
        fout << endl;
    }

    fin.close();
    fout.close();

    return 0;
}