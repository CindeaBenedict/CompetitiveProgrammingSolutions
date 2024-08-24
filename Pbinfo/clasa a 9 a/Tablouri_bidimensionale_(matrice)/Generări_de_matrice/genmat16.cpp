#include <iostream>
using namespace std;

int main()
{
    int v[630];
    v[0]=1;
    v[1]=1;
    for(int i = 2 ; i < 620 ; ++i)
    {
        v[i] = (v[i-1] + v[i-2]) % 10;
    }
    int n;
    cin >> n;
    int p = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < n ; ++j)
        {
            cout << v[p] <<" ";
            p++;
        }
        cout << endl;
    }
}