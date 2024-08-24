#include <fstream>
#include <iostream>

using namespace std;

ifstream fin("summax.in");
ofstream fout("summax.out");

int x[11] , p[11] , a[11][11] , n , smax , s;


void back(int k)
{
    for(int i = 1 ; i <= n ; ++i)
        if(!p[i])
        {
            p[i] = 1;
            x[k] = i;
            if(k == n)
            {
                s = 0;
                for(int j = 1 ; j <= n ; j++)
                    s += a[j][x[j]];
                if(s>smax) smax = s;
            }
            else back(k + 1);
            p[i] = 0;
        }
}
int main()
{
    fin >> n;
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= n ; ++j)
            fin >> a[i][j];
    back(1);
    fout << smax;
    return 0;
}