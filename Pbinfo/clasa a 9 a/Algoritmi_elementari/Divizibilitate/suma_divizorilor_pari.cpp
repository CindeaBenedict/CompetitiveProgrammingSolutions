#include <iostream>
using namespace std;

int main() {
    long long unsigned x, s = 0;
    cin >> x;
    if(x%2==0)
        s = x;
    for(long long d = 2; d*d <= x; d++) {
        if(x%d == 0) {
            if(d%2 == 0)
                s += d;
            long long unsigned d2 = x/d;
            if(d2%2 == 0 && d!=d2)
                s += d2;
        }
    }
    cout<<s;
}