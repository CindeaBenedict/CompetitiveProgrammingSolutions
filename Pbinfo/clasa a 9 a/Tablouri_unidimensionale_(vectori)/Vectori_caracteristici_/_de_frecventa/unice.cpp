#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("unice.in");
ofstream fout("unice.out");

int main()
{
    int n;
    fin >> n;
    int a[100000];
    for(int i = 0 ; i < n ; ++i)
    fin >> a[i];
    sort(a , a+n);
    for(int i = 0 ; i < n ; ++i)
    {
        if(a[i]!=a[i-1] && a[i]!=a[i+1])
        fout << a[i] <<" ";
    }
    return 0;
}