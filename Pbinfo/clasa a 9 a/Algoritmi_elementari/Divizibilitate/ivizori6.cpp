#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int smallest_divisor = n;
    int largest_divisor = 1;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            smallest_divisor = min(smallest_divisor, i);
            largest_divisor = max(largest_divisor, n/i);
        }
    }

    int sum = smallest_divisor + largest_divisor;
    cout << sum << endl;

    return 0;
}
