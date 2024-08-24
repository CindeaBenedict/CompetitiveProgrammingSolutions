#include <iostream>
using namespace std;
int n, gmax, greu[1001], val[1001], dp[1001][10001];

int main()
{
    cin >> n >> gmax;
    for(int i = 1; i <= n; i++)
        cin >> greu[i] >> val[i];
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= gmax; j++) {
            if(greu[i] <= j && val[i] + dp[i - 1][j - greu[i]] > dp[i - 1][j]) {
                dp[i][j] = val[i] + dp[i - 1][j - greu[i]];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][gmax];
    return 0;}