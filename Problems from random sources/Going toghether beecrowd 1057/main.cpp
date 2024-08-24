#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

const int N = 15;

int n, t, x, y, ex, ey, d[N][N];
char a[N][N];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool check(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n && a[x][y] != '#';
}


int bfs(int x, int y) {
    memset(d, -1, sizeof d);
    queue<pair<int, int>> q;
    q.push({x, y});
    d[x][y] = 0;
    while (!q.empty()) {
        auto t = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = t.first + dx[i], ny = t.second + dy[i];
            if (check(nx, ny) && d[nx][ny] == -1) {
                d[nx][ny] = d[t.first][t.second] + 1;
                q.push({nx, ny});
            }
        }
    }
    int res = 1e9;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 'X') {
                res = min(res, d[i][j]);
                if (d[i][j] == -1) return -1;
            }
        }
    }
    return res;
}

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cin >> a[j][k];
                if (a[j][k] == 'A') {
                    x = j, y = k;
                }
            }
        }
        int res = bfs(x, y);
        cout << "Case " << i << ": ";
        if (res == -1) {
            cout << "trapped" << endl;
        } else {
            cout << res << endl;
        }
    }
    return 0;
}