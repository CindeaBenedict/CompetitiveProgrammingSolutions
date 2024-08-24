#include <fstream>
#include <unordered_map>
#include <algorithm>

using namespace std;

ifstream cin("ratc2.in");
ofstream cout("ratc2.out");

struct persoana{

    string nume;
    string prenume;
    int penalizari;

};

const int NMAX = 1e2;
persoana v[NMAX + 1];
unordered_map <string, int> m;
int n, task, p;

void read(){

    cin >> n >> task;
    
    string nume, prenume, add;
    bool x;

    for(int i = 1; i <= n; i++){

        cin >> prenume >> nume >> x;
        add = prenume + nume;

        if(!m[add]){

            ++p;

            v[p].nume = nume;
            v[p].prenume = prenume;
            m[add] = p;

            if(!x)
                v[p].penalizari++;

        }else{

            if(!x)
                v[m[add]].penalizari++;

        }

    }

}

bool cmp(persoana a, persoana b){

    if(a.penalizari != b.penalizari)
        return (a.penalizari > b.penalizari);
    else if(a.prenume != b.prenume)
        return (a.prenume < b.prenume);
    
    return (a.nume < b.nume);
}

int main(){

    read();
    sort(v + 1, v + 1 + p, cmp);

    if(task == 1)
        cout << v[1].prenume << " " << v[1].nume << " " << v[1].penalizari; 
    else
        for(int i = 1; i <= p; i++)
            cout << v[i].prenume << " " << v[i].nume << " " << v[i].penalizari << "\n";

}