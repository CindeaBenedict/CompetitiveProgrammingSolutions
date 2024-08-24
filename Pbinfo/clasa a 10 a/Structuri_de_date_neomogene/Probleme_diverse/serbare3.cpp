/*

Pirnog Theodor Ioan
Colegiul National "B. P. Hasdeu"

*/

#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("serbare.in");
ofstream cout("serbare.out");

const int NMAX = 1e2;
const int HMAX = 15e1;
int h[HMAX + 5], task, maxi, hmax, n;

struct copil{

    int height;
    string nume;

};

copil v[NMAX + 5];
string nume;

void read(){

    cin >> task >> n;
    int x = 0;

    for(int i = 0; i < n; i++){

        cin >> nume >> x;
        v[i] = {x, nume};
        hmax = max(hmax, x);
        h[x]++;

    }

}

bool cmp(copil a, copil b){

    if(a.height != b.height)
        return (a.height < b.height);

    return (a.nume < b.nume);
}

void print(copil a){

    if(task == 2)
        cout << a.height << " ";
    else cout << a.nume << " ";

}

void solve(){

    sort(v, v + n, cmp);

    int x = 0, y = 0, st = 0, dr = n - 1;
    int t = n - h[hmax];

    // deoarece x >= y:

    if(t % 2 == 0)
        x = t / 2, y = x;
    else{

        x = t / 2;
        y = x;
        x++;

    }

    // afisez cei mai mici copii
    while(x){

        print(v[st]);
        x--, st++;

    }

    // daca mai sunt copii cu inaltimea egala cu ultimul copil din grupa 1
    int poz = st - 1;
    while(v[st].height == v[poz].height){

        print(v[st]);
        st++, y--;

    }

    // pt a afisa lexicografic copii cu inaltimea maxima    
    while(v[dr].height == hmax)
        dr--;
    
    poz = dr;
    dr++;

    while(dr < n)
        print(v[dr]), dr++;

    
    // am de afisat copii din secventa [st, poz]
    // parcurg secventa de la dreapta la stanga pentru a afisa inaltimile descrescator, dar, fiecare secventa de inaltimi egale, trebuie parcursa de la stanga la dreapta
    // pentru a fi afisata lexicografic

    int i = poz, j = 0;
    while(y){

        // aici merg cat de mult pot in stanga pentru a afisa secventa lexicografic
        j = i;
        while(v[i].height == v[j].height)
            j--;
    
        j++;
        for(int q = j; q <= i; q++, y--)
            print(v[q]);

        i = j - 1;
    }

}

int main(){

    read();
    for(int i = 1; i <= HMAX; i++)
        maxi = max(maxi, h[i]);
    
    if(task == 1)
        cout << maxi;
    else
        solve();         

}