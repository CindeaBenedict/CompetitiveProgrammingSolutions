
#include <iostream>
#include <cstring>
using namespace std;
struct om {
    char prenume[256];
    char nume[256];
    long long salariu;
    long long varsta;
    char functie[256];
    char numar_de_telefon[256];
    char email[256];
}a[81];
int p, n;
char c;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].prenume >> a[i].nume >> a[i].salariu;
        cin >> a[i].varsta >> a[i].functie >> a[i].numar_de_telefon >> a[i].email;
    }
    cin >> p >> c;
    if (p == 1) {
        if (c == '-') {
            for (int i = 1; i <= n - 1; i++) {
                for (int j = 1; j <= n - i; j++) {
                    if (strcmp(a[j].prenume, a[j + 1].prenume) < 0) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
        if (c == '+') {
            for (int i = 1; i <= n - 1; i++) {
                for (int j = 1; j <= n - i; j++) {
                    if (strcmp(a[j].prenume, a[j + 1].prenume) > 0) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
    }
    if (p == 2) {
        if (c == '-') {
            for (int i = 1; i <= n - 1; i++) {
                for (int j = 1; j <= n - i; j++) {
                    if (strcmp(a[j].nume, a[j + 1].nume) < 0) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
        if (c == '+') {
            for (int i = 1; i <= n - 1; i++) {
                for (int j = 1; j <= n - i; j++) {
                    if (strcmp(a[j].nume, a[j + 1].nume) > 0) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
    }
    if (p == 3) {
        if (c == '-') {
            for (int i = 1; i <= n - 1; i++) {
                for (int j = 1; j <= n - i; j++) {
                    if (a[j].salariu < a[j + 1].salariu) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
        if (c == '+') {
            for (int i = 1; i <= n - 1; i++) {
                for (int j = 1; j <= n - i; j++) {
                    if (a[j].salariu > a[j + 1].salariu) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
    }
    if (p == 4) {
        if (c == '-') {
            for (int i = 1; i <= n - 1; i++) {
                for (int j = 1; j <= n - i; j++) {
                    if (a[j].varsta < a[j + 1].varsta) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
        if (c == '+') {
            for (int i = 1; i <= n - 1; i++) {
                for (int j = 1; j <= n - i; j++) {
                    if (a[j].varsta > a[j + 1].varsta) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
    }
    if (p == 5) {
        if (c == '-') {
            for (int i = 1; i <= n - 1; i++) {
                for (int j = 1; j <= n - i; j++) {
                    if (strcmp(a[j].functie, a[j + 1].functie) < 0) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
        if (c == '+') {
            for (int i = 1; i <= n - 1; i++) {
                for (int j = 1; j <= n - i; j++) {
                    if (strcmp(a[j].functie, a[j + 1].functie) > 0) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
    }
    if (p == 6) {
        if (c == '-') {
            for (int i = 1; i <= n - 1; i++) {
                for (int j = 1; j <= n - i; j++) {
                    if (strcmp(a[j].numar_de_telefon, a[j + 1].numar_de_telefon) < 0) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
        if (c == '+') {
            for (int i = 1; i <= n - 1; i++) {
                for (int j = 1; j <= n - i; j++) {
                    if (strcmp(a[j].numar_de_telefon, a[j + 1].numar_de_telefon) > 0) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
    }
    if (p == 7) {
        if (c == '-') {
            for (int i = 1; i <= n - 1; i++) {
                for (int j = 1; j <= n - i; j++) {
                    if (strcmp(a[j].email, a[j + 1].email) < 0) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
        if (c == '+') {
            for (int i = 1; i <= n - 1; i++) {
                for (int j = 1; j <= n - i; j++) {
                    if (strcmp(a[j].email, a[j + 1].email) > 0) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i].prenume << ' ' << a[i].nume << ' ' << a[i].salariu << ' ';
        cout << a[i].varsta << ' ' << a[i].functie << ' ' << a[i].numar_de_telefon << ' ' << a[i].email << '\n';
    }
}