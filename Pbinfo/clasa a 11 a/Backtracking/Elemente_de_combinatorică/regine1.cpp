#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 10;

int n;
vector<int> col(MAX_N + 1);  // Vectorul col reprezintă coloana în care este plasată regina pe linia i.

bool isValid(int row, int column) {
    // Verificăm dacă putem plasa regina pe linia 'row' și coloana 'column'.
    for (int prevRow = 1; prevRow < row; prevRow++) {
        int prevColumn = col[prevRow];
        if (prevColumn == column || abs(prevRow - row) == abs(prevColumn - column)) {
            return false;  // Se atacă pe aceeași coloană sau diagonală.
        }
    }
    return true;
}

void solve(int row) {
    if (row > n) {
        // Am plasat toate reginele, afișăm tabla.
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (col[i] == j) {
                    cout << "* ";
                } else {
                    cout << "- ";
                }
            }
            cout << endl;
        }
        exit(0);  // Ieșim din program după afișarea primei soluții.
    } else {
        for (int column = 1; column <= n; column++) {
            if (isValid(row, column)) {
                col[row] = column;
                solve(row + 1);
                col[row] = 0;  // Pentru backtracking.
            }
        }
    }
}

int main() {
    cin >> n;
    solve(1);  // Apelăm funcția de rezolvare începând cu prima linie.
    return 0;
}
