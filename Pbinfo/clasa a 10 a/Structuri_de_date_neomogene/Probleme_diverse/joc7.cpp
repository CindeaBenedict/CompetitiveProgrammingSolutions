/*

Pirnog Theodor Ioan
Colegiul National "B. P. Hasdeu"

*/

#include <fstream>
#include <deque>

using namespace std;

ifstream cin("joc7.in");
ofstream cout("joc7.out");

const int NMAX = 1e2;
int task, n, k, teodora, stefan, maxi;
deque <pair <int, pair <int, int>>> q;
int r, start, b[NMAX + 5][NMAX + 5];
// start = 1 => Teodora, -1 => Stefan

void read(){

    int x = 0;

    int lim = n * n, l = 0, c = 0;
    for(int i = 0; i < lim; i++){

        cin >> x;
        l = x / n - (x % n == 0);
        c = x - l * n - 1;

        q.push_back({x, {l, c}});
    }

}

int check_winner(int who){

    
    // linii si coloane
    for(int i = 0; i < n; i++)
        if(b[n][i] == n || b[n][i] == -n || b[i][n] == n || b[i][n] == -n)
            return who;

    if(b[n][n] == n || b[n][n] == -n) // diag 1
        return who;
    
    if(b[n - 1][0] == n || b[n - 1][0] == -n) // diag 2 
        return who;

    if(b[0][1] == n - 1 || b[0][1] == -n + 1)
        return who; // semidiag deasupra diag 1

    if(b[1][0] == n - 1 || b[1][0] == -n + 1)
        return who; // semidiag sub diag 1
    
    if(b[n - 2][0] == n - 1 || b[n - 2][0] == -n + 1)
        return who; // semidiag deasupra diag 2

    if(b[n - 1][1] == n - 1 || b[n - 1][1] == -n + 1)
        return who; // semidiag sub diag 2

    return 0;
}

void solve(){

    int who = start;
    int x = 0, l = 0, c = 0, check = 0, mutari = 0;
    ++r;

    while(!q.empty()){

        x = q.front().first;
        l = q.front().second.first;
        c = q.front().second.second;

        b[n][c] += who; // coloane
        b[l][n] += who; // linii

        if(l == c)
            b[n][n] += who; // diag 1
        
        if(l != c && l + c == n - 1)
            b[n - 1][0] += who; // diag 2

        if(l == c - 1)
            b[0][1] += who; // semidiag deasupra diag 1
        
        if(l == c + 1)
            b[1][0] += who; // semidiag sub diag 1

        if(l == n - c - 2)
            b[n - 2][0] += who; // semidiag deasupra diag 2
        
        if(l == n - c)
            b[n - 1][1] += who; // semidiag sub diag 2

        mutari++;

        check = check_winner(who);

        if(check){

           if(who == 1)
                teodora++;
            else stefan++;

            maxi = max(maxi, mutari);

            break;
        }

        who *= - 1;
        q.pop_front();
    }
    
}

void clear(){

    for(int i = 0; i < n; i++)
        b[n][i] = 0, b[i][n] = 0;
    
    b[n][n] = 0;
    b[n - 1][0] = 0;
    b[0][1] = 0;
    b[1][0] = 0;
    b[n - 2][0] = 0;
    b[n - 1][1] = 0;

    q.clear();

}

int main(){

    ios :: sync_with_stdio(false);

    cin >> task >> n >> k;
    start = 1;

    for(int i = 0; i < k; i++){

        read();
        solve();
        clear();
        start *= -1;

    }

    if(task == 1)
        cout << teodora << " " << stefan;
    else cout << maxi;

}