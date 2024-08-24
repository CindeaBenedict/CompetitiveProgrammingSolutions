

#include <fstream>
#include <deque>
#pragma GCC push_options
#pragma GCC optimize ("O3")
#pragma GCC pop_options

using namespace std;

ifstream cin("maxsecvk.in");
ofstream cout("maxsecvk.out");

const int NMAX = 1e6;
int v[NMAX + 1], n, k;
deque <int> dq;

void read(){

    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        cin >> v[i];

}

void solve(){

    for(int i = 1; i <= n; i++){

        while(!dq.empty() && v[i] >= v[dq.back()])
            dq.pop_back();

        dq.push_back(i);

        if(i >= k){

            while(!dq.empty() && dq.front() <= i - k)
                dq.pop_front();

            cout << v[dq.front()] << " ";

        }

    }

}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    read();
    solve();

}