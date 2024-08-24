#include <fstream>
using namespace std;
char s[100001];
int i;

ifstream fin("evaluare.in");
ofstream fout("evaluare.out");

int expresie(); ///de lene nu am avut chef sa gandesc ordinea in care trebe sa scriu functiile :)))
int termen();
int factor();
int constanta();

int main () {
    fin>>s;
    fout<<expresie();
}
int expresie() {
    int r = termen();
    while (s[i] == '+'|| s[i] == '-') {

        if (s[i] == '+') {

            i++;
            r += termen();
        } else {
            i++;
            r -= termen();
        }
    }
return r;
}
int termen () {
    int r = factor();
    while (s[i] == '*' || s[i] == '/' ) {

        if (s[i] == '*') {

            i++;
            r *= factor();
        } else {
            i++;
            r /= factor();
        }
}
return r;
}
int factor () {
int r;
    if (s[i] == '(') {   ///ce ii dupa paranteza are prioritate
        i++;
        r = expresie();
        i++;
    } else {
        r = constanta();
    }
return r;
}
int constanta () {
    int r = 0;
    while (s[i] >= '0' && s[i]<='9') {
        r = r * 10+ (s[i] - '0');

        i++;
    }
    return r;
}
