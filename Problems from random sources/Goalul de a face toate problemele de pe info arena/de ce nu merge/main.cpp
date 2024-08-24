#include <fstream>

using namespace std;

ifstream cin("secventa.in");
ofstream cout("secventa.out");

int main()
{
    int n;
    cin >> n;
    int a[100001];
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    int lmax = 0, l = 1, st = 1, dr = 1, summax = a[1], sum = a[1];
    for(int i = 2; i <= n; ++i){
        if(a[i] % 2 != a[i-1] % 2){
            l++;
            sum += a[i];
        }
        else{
            if(l > lmax)
                lmax = l, st = i - l, dr = i - 1, summax = sum;
            else if(l == lmax)
                if(sum >= summax)
                    summax = sum, st = i - l, dr = i - 1;
            l = 1, sum = a[i];
        }
    }
    if(l > lmax)
        lmax = l, st = n - l + 1, dr = n, summax = sum;
    else if(l == lmax)
        if(sum >= summax)
            summax = sum, st = n - l + 1, dr = n;

    cout << st << " " << dr;

    return 0;
}
