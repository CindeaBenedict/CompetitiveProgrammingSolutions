#include <fstream>
#include <queue>

using namespace std;

ifstream fin("insule.in");
ofstream fout("insule.out");

const int INF = 1e5;

int di[4] = { -1, 0, 1,  0 };
int dj[4] = {  0, 1, 0, -1 };

queue < pair <int, int> >Q;

int n, m, v[4], f[105][105], dp[105][105];
char a[105][105];

void Fill ( int i, int j ){
    f[i][j] = 1;
    for (int d = 0; d < 4; d++){
        int iv = i + di[d];
        int jv = j + dj[d];
        if ( iv >= 1 && iv <= n && jv >= 1 && jv <= m && a[iv][jv] == a[i][j] && f[iv][jv] == 0 ){
            Fill( iv, jv );
        }
    }

}



int main(){
    fin >> n >> m;
    for (int i = 1; i <= n; i++)
            fin >> a[i]+1;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if ( a[i][j] != '0' && f[i][j] == 0 ){
                v[ a[i][j]-'0' ]++;
                Fill (i, j);
            }
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            dp[i][j] = INF;
            if ( a[i][j] == '1' ){
                dp[i][j] = 0;
                Q.push( make_pair(i, j) );
            }
        }
    }
    while ( !Q.empty() ){
        int i = Q.front().first;
        int j = Q.front().second;
        Q.pop();
        for (int d = 0; d < 4; d++){
            int iv = i + di[d];
            int jv = j + dj[d];
            if ( iv >= 1 && iv <= n && jv >= 1 && jv <= m && a[iv][jv] == '0' && dp[iv][jv] > dp[i][j] + 1 ){
                dp[iv][jv] = dp[i][j] + 1;
                Q.push( make_pair(iv, jv));

            }
        }
    }
    int ans = INF;
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if ( a[i][j] == '2' ){
                for (int d = 0; d < 4; d++){
                    int iv = i + di[d];
                    int jv = j + dj[d];
                    if ( iv >= 1 && iv <= n && jv >= 1 && jv <= m && a[iv][jv] == '0'){
                        ans = min ( ans, dp[iv][jv] );

                    }
                }
            }
        }
    }

    fout << v[1] << " " << v[2] << " " << v[3] << " " << ans;
    return 0;
}
