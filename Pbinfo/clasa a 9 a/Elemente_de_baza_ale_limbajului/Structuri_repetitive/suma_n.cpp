#include <iostream>

using namespace std;

int main()
{
    int n, s =0;
    cin >> n;
    int tmp;
    for (int i=1; i<=n;i++){ cin >> tmp;
    s+= tmp;
    }
    cout << s;
    return 0;
}