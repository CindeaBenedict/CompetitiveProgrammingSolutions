#include <fstream>
using namespace std;
ifstream cin("decodificare.in");
ofstream cout("decodificare.out");

int main()
{
    int n;
    char a[1501][1501];
    cin >> n;
    for(int i = 1 ; i <= n/2 ; ++i)
        for(int j = 1 ; j <= n/2 ; ++j)
        {
            cin >>a[i][j];
        }
    for(int i = 1 ; i <= n/2 ; ++i)
        for(int j = 1 ; j <= n/2 ; ++j)
            if(i+j-1==n/2)
                cout << a[i][j];
    for(int i = 1 ; i <= n/2 ; ++i)
        for(int j = 1 ; j <= n/2 ; ++j)
            if(i == j)
                cout << a[i][j];
    return 0;
}
