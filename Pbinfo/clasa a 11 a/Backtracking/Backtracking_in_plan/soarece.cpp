#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("soarece.in");
ofstream fout("soarece.out");
int n, m, is, js, ib, jb, a[11][11];
bool v[11][11]; // coordonate vizitate deja
int vec[4][2] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

void back(int _x, int _y) {
    a[_x][_y] += 1; // de fiecare data cand ajungem in {_x, _y}
    // incrementam numarul de moduri de a ajunge in {_x, _y}
    if(_x == ib && _y == jb) {
        return;
    } else {
        for(int i = 0; i < 4; i++) {
            int x, y; // generam toti vecinii pentru {_x, _y}
            x = _x + vec[i][0];
            y = _y + vec[i][1];
            if(x >= 1 && x <= n && y >= 1 && y <= m && !v[x][y]) {
                v[x][y] = true;
                back(x, y);
                v[x][y] = false;
            }
        }
    }
}

int main() {
    fin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            fin >> v[i][j];
        }
    }
    fin >> is >> js >> ib >> jb;
    v[is][js] = true;
    back(is, js);
    fout << a[ib][jb];
}