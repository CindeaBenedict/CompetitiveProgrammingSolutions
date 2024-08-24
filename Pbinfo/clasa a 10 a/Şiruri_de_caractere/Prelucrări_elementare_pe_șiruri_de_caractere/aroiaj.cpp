#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

char mat[505][505];
vector<char> v;

int main()
{
    int n, res = 0, rp = 0, i, j, p, mid;

    ifstream fin("caroiaj.in");
    ofstream fout("caroiaj.out");

    fin >> n;

    for (i = 1; i <= n; i++)
        fin >> (mat[i] + 1);

    v.push_back('$');

    for (p = 1; p <= (n + 1) / 2; p++) {
        for (i = p; i <= n - p + 1; i++)
            v.push_back(mat[p][i]);
        for (i = p + 1; i <= n - p + 1; i++)
            v.push_back(mat[i][n - p + 1]);
        for (i = n - p; i >= p; i--)
            v.push_back(mat[n - p + 1][i]);
        for (i = n - p; i > p; i--)
            v.push_back(mat[i][p]);
    }
    v.push_back('$');

    n *= n;

    for (mid = 1; mid <= n; mid++) {
        i = j = mid;
        while (v[i - 1] == v[j + 1])
            --i, ++j;
        if (j - i + 1 >= res)
            res = j - i + 1, rp = i;
    }

    for (mid = 1; mid < n; mid++)
        if (v[mid] == v[mid + 1]) {
            i = mid, j = mid + 1;
            while (v[i - 1] == v[j + 1])
                --i, ++j;
            if (j - i + 1 >= res)
                res = j - i + 1, rp = i;
        }

    for (i = rp; i < rp + res; i++)
        fout << v[i];

    return 0;
}