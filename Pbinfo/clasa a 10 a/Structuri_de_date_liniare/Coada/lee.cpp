#include <iostream>
#include <queue>



using namespace std;

#define MAX 1000001
#define inf 10000000

bool a[101][101];
int d[101][101][8];

int di[] = {1, 0, -1, 0};
int dj[] = {0, 1, 0, -1};
int n;

pair<int, int> puncte[3];

void lee(pair<int, int> source)
{
    queue< pair<int, int> > Q;
    Q.push(source);
    d[1][1][0] = 0;
    pair<int, int> node;
    int ok = 0;
    while (!Q.empty())
    {
        node = Q.front();

        Q.pop();

        ok = 0;
        for (int i = 0; i < 3; ++ i)
            if (node == puncte[i])
                ok = (1 << i);

        for (int dir = 0, inou, jnou; dir < 4; ++ dir)
        {
            inou = node.first + di[dir];
            jnou = node.second + dj[dir];
            if (a[inou][jnou] == 1 || inou < 1 || jnou < 1 || inou > n || jnou > n)continue;

            for (int i = 0; i < 8; ++ i)
                if (d[inou][jnou][i | ok] > d[node.first][node.second][i] + 1)
                {
                    d[inou][jnou][i | ok] = d[node.first][node.second][i] + 1;
                    Q.push({inou, jnou});
                }
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++ i)
        for (int j = 1; j <= n; ++ j)
        {
            cin >> a[i][j];
            for (int k = 0; k < 8; ++ k)
                d[i][j][k] = inf;
        }
    for (int i = 0; i < 3; ++ i)
        cin >> puncte[i].first >> puncte[i].second;
    lee({1, 1});
    cout << d[n][n][7];
    return 0;
}