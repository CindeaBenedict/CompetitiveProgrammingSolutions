#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n = n % 10 * 10 + n / 10;
    cout << n * n;
    return 0;
}