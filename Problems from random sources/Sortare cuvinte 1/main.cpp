#include <fstream>
#include <map>
#include <string>
using namespace std;


ifstream cin("sortarecuvinte1.in");
ofstream cout("sortarecuvinte1.out");

int main()
{
    map <string,int> M;
    string s;
    while(cin >> s)
        M[s]=1;
    for(auto x:M)
    {
        for(int i = 1 ; i <= x.second ; ++i)
            cout << x.first << '\n';
    }
    return 0;
}