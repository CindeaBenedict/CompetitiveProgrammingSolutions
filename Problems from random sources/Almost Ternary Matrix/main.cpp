#include <iostream>

using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << (i + j) % 2;
                cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
