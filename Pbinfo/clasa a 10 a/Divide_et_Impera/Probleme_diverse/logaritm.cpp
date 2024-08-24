/*

Pirnog Theodor Ioan
Colegiul National "B. P. Hasdeu"

*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

const long double e = 2.7182818284590452353602874713527;
const long double eroare = 0.0000000001;

void logaritm_natural(long double x, long double st, long double dr, long double &exponent){

    if(st <= dr){

        long double mid = (st + dr) / 2;

        if(abs(pow(e, mid) - x) <= abs(pow(e, exponent) - x))
            exponent = mid;

        if(pow(e, mid) <= x)
            logaritm_natural(x, mid + eroare, dr, exponent);
        else logaritm_natural(x, st, mid - eroare, exponent);

    }

}

int main(){

    long double st = 0, dr = 32, x, exponent = 32;

    cin >> x;

    if(x == 1){
     
        cout << "0.000000";
        return 0;

    }

    logaritm_natural(x, st, dr, exponent);
    exponent *= 1000000;

    // daca dau cout cu seprecision(6), ultima zecimala nu va fi corecta, asa ca voi lua cele 6 zecimale, le pun dupa virgula (* 10^6) si transform totul intr un
    // string pe care l prelucrez

    string s = to_string(exponent);

    int poz = 0;
    bool dot = 0;

    for(int i = 0; i < s.size() && !dot; i++)
        if(s[i] == '.')
            poz = i, dot = 1;

    s.insert(poz - 6, 1,'.');

    short zecimale = 7;
    dot = 0;

    if(s[0] == '.')
        cout << '0';

    for(int i = 0; i < s.size() && zecimale; i++){
        
        if(s[i] == '.')
            dot = 1;

        if(dot)
            zecimale--; 

        cout << s[i];
    }


}