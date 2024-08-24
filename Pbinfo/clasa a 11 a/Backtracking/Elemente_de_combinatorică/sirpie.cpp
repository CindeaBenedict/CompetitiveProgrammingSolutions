#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("sirpie.in");
ofstream fout("sirpie.out");
// Declarăm variabilele globale și funcțiile utilizate
int n;               // Numărul de elemente din șir
int x[20];           // Vectorul pentru permutare
bool s[20];          // Vectorul pentru a urmări elementele utilizate
int a[20];           // Vectorul pentru elementele de intrare

// Funcție pentru a verifica dacă două numere sunt prime între ele
bool isPrime(int x, int y) {
    int a = x, b = y;
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a == 1;
}

// Funcție pentru a afișa o soluție validă
void ScrieSol() {
    for (int i = 1; i <= n; ++i)
        fout << a[x[i]] << ' ';
    fout << '\n';
}

// Funcție recursivă pentru a genera permutările
void Perm(int k) {
    if (k > n) {
        // Verificăm dacă permutarea respectă condiția
        bool valid = true;
        for (int i = 1; i < n; i++) {
            if (!isPrime(a[x[i]], a[x[i + 1]])) {
                valid = false;
                break;
            }
        }
        if (valid) {
            ScrieSol(); // Afișăm soluția validă
        }
        return;
    }

    // Generăm toate permutările
    for (int i = 1; i <= n; ++i) {
        x[k] = i;
        if (!s[i]) {
            s[i] = true;
            Perm(k + 1);
            s[i] = false;
        }
    }
}

int main() {
    // Citim datele de intrare
    fin >> n;
    for (int i = 1; i <= n; ++i)
        fin >> a[i];
    sort(a + 1, a + n + 1); // Sortăm vectorul de intrare
    // Apelăm funcția pentru a genera permutările și afișa soluțiile valide
    Perm(1);

    return 0;
}
