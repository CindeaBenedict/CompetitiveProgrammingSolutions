#include <iostream>
using namespace std;
int fib(int n) {
    if (n <= 0) { //problema are requirement ca numarul sa fie pozitiv
        return 0;
    } else if (n == 1) { //primul si al doilea numar  este 1 pentru sirul lui fibonaci ( sirul lui fibonacii 0,1,1,2,3,5,8 ... v[i]=v[i-1]+v[i-2]
        //stiind ca v[1]=1 si v[0]=1 )
        return 1;
    } else {//
        int f[n];
        f[0]=1;
        f[1]=1;
        for (int i=2;i<=n;i++) {
            f[i]=f[i-1]+f[i-2];
        }
        return f[n];
    }
}

int main() {
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}
