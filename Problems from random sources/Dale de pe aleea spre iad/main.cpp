#include <iostream>
#include <fstream>
#include <queue>
#define NMAX 175
using namespace std;
ifstream in("alee.in");
ofstream out("alee.out");



const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};
queue <int> lin;
queue <int> col;
const int nrDir = 4;
int m[2 + NMAX][2 + NMAX], N, M;
int main()
{
    int x1, y1, x2, y2, a, b;
    in >> N >> M;
    int X, Y;
    for (int i = 1; i <= M; i++)
    {
        in >> X >> Y;
        m[X][Y] = -1;
    }

    for (int i = 0; i <= N + 1; i++)
        m[i][0] = m[0][i] = m[N + 1][i] = m[i][N+1] = -1;

    in >> x1 >> y1 >> x2 >> y2;

    m[x1][y1] = 1;
    lin.push(x1);
    col.push(y1);

    while (!lin.empty())
    {
        a = lin.front();
        b = col.front();
        lin.pop(), col.pop();

        for (int i = 0; i < nrDir; i++)
        {
            if (m[a + dx[i]][b + dy[i]] == 0)
            {
                m[a + dx[i]][b + dy[i]] = m[a][b] + 1;
                lin.push(a + dx[i]);
                col.push(b + dy[i]);
            }
        }
    }

    out << m[x2][y2];
    in.close();
    out.close();
    return 0;
}