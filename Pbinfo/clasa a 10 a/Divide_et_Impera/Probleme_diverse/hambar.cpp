#include <bits/stdc++.h>


using namespace std;

ifstream fin("hambar.in");
ofstream fout("hambar.out");

const int MaxN = 1001;

int h[MaxN][MaxN];
bool a[MaxN][MaxN];
int m, n;

int maxAreaInHist(int x[], int L)
{
    stack<int> st;

    int j = 0, tp;
    int amax = 0, area;

    while (j < n)
    {
        if (st.empty() || x[st.top()] <=  x[j])
            st.push(j++);
        else
        {
            tp = st.top();
            st.pop();
            area = x[tp] * (st.empty() ? j : j - st.top() - 1);
            amax = max(amax, area);
        }
    }

    while (!st.empty())
    {
        tp = st.top();
        st.pop();
        area = x[tp] * (st.empty() ? j : j - st.top() - 1);
        amax = max(amax, area);
    }

    return amax;
}

int main()
{
     // citire
    fin >> m >> n;
    for (int i = 0; i < n; ++i)
    {
        int x1, y1;
        fin >> x1 >> y1;
        a[x1-1][y1-1]=1;
    }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            a[i][j]=!a[i][j];

    int maxArea = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] == 0)
                h[i][j] = 0;
            else
            {
                if ( i == 0 )
                    h[i][j] = 1;
                else
                    h[i][j] = h[i - 1][j] + 1;
            }

    int area;
    for (int i = 0; i < m; i++)
    {
        area = maxAreaInHist(h[i], i);
        if (area > maxArea)
            maxArea = area;
    }
    fout << maxArea;
}