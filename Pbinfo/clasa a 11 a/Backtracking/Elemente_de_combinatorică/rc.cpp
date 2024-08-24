#include <iostream>
#include <algorithm>
#include <fstream>


using namespace std;

ifstream fin("cerc.in");
ofstream fout("cerc.out");

int n , x[20] , a[20] , rez[20] , p[20] , maxi;

void afisare()
{
    for(int i = 1 ; i <= n ; i++)
        fout << a[x[i]] << " ";
    fout << '\n';
}

int suma()
{
    int s = 0;
    s += a[x[1]] * a[x[n]];
    for(int i = 2 ; i <= n ; i++)
        s += a[x[i]] * a[x[i - 1]];
    return s;
}

void back(int k)
{
    for(int i = 1 ; i <= n ; i++)
        if(!p[i])
        {
            x[k] = i;
            p[i] = 1;
            if(k == n)
            {
                if(suma() > maxi)
                {
                    maxi = suma();
                    for(int q = 1 ; q <= n ; q++)
                        rez[q] = x[q];
                }
            }
            else back(k + 1);
            p[i] = 0;
        }
}

int main()
{
    fin >> n;
    for(int i = 1 ; i <= n ; i++)
        fin >> a[i];
    sort(a + 1 , a + n + 1);
    x[1] = 1;
    back(2);
    for(int i = 1 ; i <= n ; i++)
        fout << a[rez[i]] << " ";
    return 0;
}