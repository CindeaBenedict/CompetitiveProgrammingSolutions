#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n;
    string cheie; /// What the actual fuck?

    char v[100][100];
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=n;j++)
            cin>>v[i][j];
    }
    return 0;
}
