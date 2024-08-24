#include <iostream>
using namespace std;

const int mod = 666013;

int ucpara[100005], ucimpara[100005];

int main() {
    int n;
    cin >> n;
    ucpara[1] = 4;
    ucimpara[1] = 5;
    for (int i = 2; i <= n; i++) {
        ucpara[i] = (ucimpara[i-1] * 4) % mod;
        ucimpara[i] = (ucpara[i-1] * 5) % mod;
    }
    cout << (ucpara[n] + ucimpara[n]) % mod << endl;
    return 0;
}
