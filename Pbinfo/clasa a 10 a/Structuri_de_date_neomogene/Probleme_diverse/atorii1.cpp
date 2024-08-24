/*

Pirnog Theodor Ioan
Colegiul National "B. P. Hasdeu"

*/

#include <fstream>
#include <algorithm>
#include <cstring>
#include <unordered_map>

using namespace std;

ifstream cin("datorii.in");
ofstream cout("datorii.out");

const int NMAX = 6e3;

struct firma{

    string nume;
    long long sd, sp; 

};

unordered_map <string, int> poz;
firma firme[NMAX + 5];
string s, nume;
int task, n, k;

int exponentiere(int base, int exponent){

    if(!exponent)
        return 1;
    else if(exponent % 2)
        return base * exponentiere(base, exponent - 1);

    int p = exponentiere(base, exponent / 2);
    
    return p * p;
}

void read(){

    cin >> task >> n;
    cin.get();
    char *v = new char[int(1e2) + 5];
    string nume1, nume2;
    int x = 0, p1 = 0, p2 = 0, j = 0, p = 0, pow10 = 0;

    for(int i = 0; i < n; i++){

        nume1.clear();
        nume2.clear();
        x = 0;

        cin.getline(v, int(1e2));
        j = 0, p = strlen(v) - 1;

        while(v[j] != '>'){
            
            if(!(v[j] == char(32) && v[j + 1] == '>'))
                nume1 += v[j];
            
            j++;
        }

        j += 2; // primul caracter al firmei 2

        // iau numarul de la sf sirului
        pow10 = 0;
        while(isdigit(v[p]))
            x += exponentiere(10, pow10++) * (v[p--] - 48);
        
        while(j < p)
            nume2 += v[j++];
        
        
        if(!poz[nume1]){

            ++k;
            firme[k].nume = nume1;
            poz[nume1] = k;

        }
            
        p1 = poz[nume1];

        if(!poz[nume2]){

            ++k;
            firme[k].nume = nume2;
            poz[nume2] = k;

        }   
            
        p2 = poz[nume2];

        firme[p1].sd += x;
        firme[p2].sp += x;

    }

    delete[] v;
}

bool cmp(firma a, firma b){
    return(a.nume < b.nume);
}

void solve(){

    if(task == 1)
        cout << k << "\n";
    else{
        
        sort(firme + 1, firme + 1 + k, cmp);
        for(int i = 1; i <= k; i++)
          cout << firme[i].nume << " " << firme[i].sd << " " << firme[i].sp << "\n";
        
    }

}

int main(){

    read();
    solve();

}