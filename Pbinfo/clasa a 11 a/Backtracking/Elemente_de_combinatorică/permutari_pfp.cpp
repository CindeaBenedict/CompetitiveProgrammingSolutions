#include <iostream>
using namespace std;

int n;
int permutation[16];
bool used[16];


void writePermutation() {
    for (int i = 1; i <= n; ++i) {
        cout << permutation[i] << " ";
    }
    cout << endl;
}

void generatePermutations(int k) {
    if (k > n) {
		writePermutation();
        return;
    }

    for (int i = 1; i <= n; i += 2) {
        if (!used[i]) {
            used[i] = true;
            permutation[k] = i;
            generatePermutations(k + 2);
            used[i] = false;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 2; i <= n; i += 2)
		permutation[i] = i; 
		
    generatePermutations(1);
    return 0;
}
