#include <iostream>
using namespace std;
int main()
{
    int n , v[500] , p = 1 , p2 = 0;
    cin >> n;
    for(int i = 1 ; i < 500 ; ++i) v[i]=i;
    for(int i = 1 ; i <= 2 * n ; ++i)
    {
        if(i % 2 == 1)
        {
            for(int j = 1 ; j <= 2 * n ; ++j)
            {
                cout << v[p] <<" ";
                p += 2;
            }
        }
        else
        {
            p2 += 4 * n;
            int cp2 = p2;
            for(int j = 1 ; j <= 2 * n ; ++j)
            {
                cout << v[cp2] <<" ";
                cp2 -= 2;
            }
        }
        cout << endl;
    }
}