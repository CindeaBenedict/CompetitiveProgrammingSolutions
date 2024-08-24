#include <fstream>
#include <algorithm>

using namespace std;

unsigned int a[4000001];

ifstream in("statisticiordine.in");
ofstream out("statisticiordine.out");

int main()
{
    unsigned int n , k;
    in >> n >> k;
    for (int i = 1 ; i <= n ; ++i) in >> a[i];
    sort (a+1 , a + n + 1);
    out << a[k];
    in.close();
    out.close();

    return 0;
}