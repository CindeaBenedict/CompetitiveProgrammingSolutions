#include <fstream>
#include <cstring>
using namespace std;
ifstream cin("evenoddxxl.in");
ofstream cout("evenoddxxl.out");

char s[1001];

int main(){
    cin >> s;
    int x = s[strlen(s)-1]-'0';
    if(x % 2 == 1)
        cout << "Impar";
    else
        cout << "Par";
    return 0;
} 