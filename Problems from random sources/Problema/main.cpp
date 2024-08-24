#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

bool is_prime(int n, int max_num) {
    if (n < 2 || n > max_num) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Citirea datelor din fisier
    vector<int> numbers;
    ifstream fin("input.txt");
    int x;
    while (fin >> x) {
        numbers.push_back(x);
    }
    fin.close();

    // Sortarea numerelor
    sort(numbers.begin(), numbers.end());

    // Cautarea de perechi cu suma prima
    ofstream fout("output.txt");
    int count = 0;
    int max_num = 10000;
    for (int i = 0; i < numbers.size() && numbers[i] <= 5000; i++) {
        for (int j = i + 1; j < numbers.size() && numbers[i] + numbers[j] <= 10000; j++) {
            int sum = numbers[i] + numbers[j];
            if (is_prime(sum, max_num)) {
                fout << numbers[i] << " " << numbers[j] << endl;
                count++;
            }
        }
    }
    fout.close();

    // Afisarea numarului de perechi gasite
    cout << "Numarul total de perechi gasite este: " << count << endl;

    return 0;
}
