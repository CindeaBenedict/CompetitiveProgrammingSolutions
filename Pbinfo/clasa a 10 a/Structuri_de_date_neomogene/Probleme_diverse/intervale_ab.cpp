#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

ifstream cin("intervale.in");
ofstream cout("intervale.out");

const int NMAX = 1e5;
vector <pair <int, char>> v;
int n, a, b;

int main(){

    cin >> n;
    int maxi = 0, k = 0, a = 0, b = 0;

    for(int i = 0; i < n; i++){

        cin >> a >> b;
        v.push_back({a, 'x'});
        v.push_back({b, 'y'});

    }

    sort(v.begin(), v.end());

    for(auto e : v){

        if(e.second == 'x') // incepe un interval
            k++;
        else k--; // se termina altul si este exclus

        maxi = max(maxi, k);
    }

    cout << maxi;

}