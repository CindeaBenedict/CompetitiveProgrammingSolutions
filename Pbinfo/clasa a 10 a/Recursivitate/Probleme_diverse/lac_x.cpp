#include <iostream>
#include <queue>
using namespace std;
/*
    Gheorghe Daniel
    100p
    Clasa a X-a
    Colegiul National "Decebal" Deva
*/
int maxi, maxp;
int peninsula;
int di[] = { -1,1,0,0 };
int dj[] = { 0,0,1,-1 };
int n, m;
bool a[1001][1001];
int inmat(int i, int j) {
    return i <= n && i >= 1 && j <= m && j >= 1;
}
int fill(int i, int j) {
    int k = 1;
    a[i][j] = 0;
    queue<pair<int, int>>q;
    q.push(make_pair(i, j));
    while(!q.empty()) {
        for(int d = 0; d < 4; d++) {
            int inou = q.front().first + di[d];
            int jnou = q.front().second + dj[d];
            if(!inmat(inou, jnou))
            peninsula = true;
            if(inmat(inou, jnou) && a[inou][jnou]) {
                a[inou][jnou] = 0;
                k++;
                q.push(make_pair(inou, jnou));
            }
        }
        q.pop();
    }
    return k;
}
int main(){
    freopen("lac_x.in", "r", stdin);
    freopen("lac_x.out", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(a[i][j]) {
                peninsula = 0;
                int arie = fill(i, j);
                if(peninsula && arie > maxp) maxp = arie;
                if(!peninsula && arie > maxi) maxi = arie;
            }
        }
    }
    cout << maxi << ' ' << maxp;
}