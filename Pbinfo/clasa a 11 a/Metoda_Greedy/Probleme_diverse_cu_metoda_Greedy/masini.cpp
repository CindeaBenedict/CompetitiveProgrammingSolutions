#include <fstream> 
#include <vector>
#include <algorithm>
using namespace std;

ifstream fin("masini.in");
ofstream fout("masini.out");

int main() {
    int n, t, x;
    fin >> n >> t;

    vector<int> g(n);
    for (int i = 0; i < n; ++i) {
        fin >> g[i];
    }

    sort(g.begin(), g.end());

    int cnt = 0;
    int s = 0;

    for (int i = 0; i < n; ++i) {
        if (s + g[i] <= t) {
            s += g[i];
            cnt++;
        } else {
            break;
        }
    }

    fout << cnt;
    return 0;
}