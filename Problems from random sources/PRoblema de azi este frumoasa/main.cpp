#include <fstream>
#include <cmath>

using namespace std;
ifstream fin("div3.in");
ofstream fout ("div3.out");

bool Prim(long long x)
{
    if( x < 2) return false;
    if( x == 2 ) return true;
    if( x % 2 == 0) return false;
    for( int i = 3; i*i <= x ; i = i + 2)
        if( x % i == 0) return false;
    return true;
}
int main()
{

    long long int n, x, a;
    fin >> n;
    for( int i = 1; i <= n; ++i)
    {
        fin >> x;
        if( sqrt( x ) == (int) sqrt( x))
        {
            a = sqrt(x);
            ///verific daca a este numar prim;
            if( Prim(a)) fout <<"1\n";
            else fout << "0\n";
        }
        else fout << "0\n";

    }

}
