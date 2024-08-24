#include <fstream>
using namespace std;

ifstream fin("sirab.in");
ofstream fout("sirab.out");

int s, n, x[8], ok = 0;

void Read() {
    fin >> s >> n;
}

void Display() {
    int i;
    for (i = 1; i <= n; i++)
        fout << x[i] << " ";
    fout << '\n';
    ok = 1;
}

int Valid(int k) {
    if (k > 1) {
        if (x[k - 1] >= x[k])
            return 0;
        int i;
        for (i = 1; i < k; i++)
            if ((x[i] + x[k]) % (x[i] - x[k]))
                return 0;
    }
    return 1;
}

void Backtracking(int k) {
    if (k > n)
        Display();
    else {
        int i;
        for (i = 1; i <= s; i++) {
            x[k] = i;
            if (Valid(k))
                Backtracking(k + 1);
        }
    }
}

int main() {
    Read();
    Backtracking(1);
    if (!ok)
        fout << 0;
}
