#include <iostream>
using namespace std;
long long V[100];

int main()
{
    int n;
    cin >> n;
    V[1] = 1;
    V[2] = 2;

    for(int i = 3 ; i <= n ; i ++)
        V[i] = V[i-1] + V[i-2];


    cout << V[n] << endl;
    return 0;
}
