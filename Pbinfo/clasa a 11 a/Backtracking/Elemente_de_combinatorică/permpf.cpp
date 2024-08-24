#include <iostream>
#include <fstream>
using namespace std;
ifstream f("permpf.in");
ofstream x("permpf.out");
int n;
int s[20];

bool isFixedPosition(int k) {
    for (int i = 1; i <= k; ++i) {
        if (s[i] == i) {
            return true; // Există un număr pe poziția sa fixă
        }
    }
    return false; // Nu există niciun număr pe poziția sa fixă
}

void scrie(){
    for(int i = 1; i <= n; ++i){
      x<< s[i] << " ";
    }
    x<< endl;
}

bool valid(int k){
    for(int i = 1; i < k; ++i)
        if(s[i] == s[k])
            return false;
    return true;
}

void Bak(int k){
    if(k > n){
        if (!isFixedPosition(n)) {
            scrie();
        }
        return;
    }

    for(int i = 1; i <= n; ++i){
        s[k] = i;
        if(valid(k)){
            Bak(k + 1); // Continuăm cu următoarea poziție
        }
    }
}

int main() {
    f>> n;
    Bak(1);
    return 0;
}
