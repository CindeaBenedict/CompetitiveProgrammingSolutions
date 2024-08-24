#include <bits/stdc++.h>


unsigned long long int Pow(int a, int b){
    unsigned long long int tmp = 1;
    for(int i = 0; i < b;i++){
     tmp *= a;
    }
    return tmp;
}

int main() {
    unsigned long long int n, m;
    std::cin >> n >> m;
    std::cout << Pow(n, m);

    return 0;
}