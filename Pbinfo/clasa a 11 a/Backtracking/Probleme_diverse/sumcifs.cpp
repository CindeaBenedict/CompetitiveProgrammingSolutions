#include <iostream>

using namespace std;

int mask[10];

static long long printNumber(int c, int s, int m, long long prefix)
{
    long long cnt = 0;
    if (c == 1)
    {
        if (s > 9 || mask[s] != 0)
            return 0;
        cout << prefix * 10 + s << endl;
        return 1;
    }
    for (int i = m; i <= 9 && i <= s; i++)
    {
        if (mask[i])
            continue;
        mask[i] = 1;
        cnt += printNumber(c - 1, s - i, 0, prefix * 10 + i);
        mask[i] = 0;
    }
    return cnt;
}

int main(void)
{
    int s, c;
    long long cnt = 0;

    cin >> s;

    for (c = 1; c < 10; c++)
        cnt += printNumber(c, s, 1, 0);

    if (cnt == 0)
        cout << -1;

    return 0;
}