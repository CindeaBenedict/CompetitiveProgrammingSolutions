#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = n - ((n+1) % 2); i >= 1; i-=2)
        cout << i << ' ';
    return 0;   
}