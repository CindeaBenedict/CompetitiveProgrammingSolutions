

#include <fstream>
#include <algorithm>
#include <bitset>
#include <vector>
#define ull unsigned long long

using namespace std;

ifstream cin("cubprim.in");
ofstream cout("cubprim.out");

const int MMAX = 2642245; // cbrt(2^64 - 1)
const int NMAX = 2e5;
bitset <MMAX> prime;
ull v[192726], x;
unsigned int n, k = -1, p = -1, cube_root = 2642245;

struct cub_prim{

    ull cp;
    unsigned int poz;
    unsigned int val;

};
cub_prim a[NMAX];

void eratostene(){

    prime[0] = 1;

    for(int i = 1; ((i * i) << 1) + (i << 1) <= MMAX; i++)
        if(!prime[i])
            for(int j = ((i * i) << 1) + (i << 1); (j << 1) + 1 <= MMAX; j += (i << 1) + 1)
                prime[j] = 1;
    
    v[++k] = 2;

    for(int i = 3; i <= MMAX; i += 2)
        if(!prime[i / 2])
            v[++k] = i;

}

int bs(ull x){

    ull cube = 0;
    int st = 0, dr = k, mid = 0, poz = 0;

    while(st <= dr){

        mid = ((st + dr) >> 1);   
        cube = v[mid] * v[mid] * v[mid]; 

        if(cube == x)
            return mid;
        else if(cube < x)
            st = mid + 1;
        else
            dr = mid - 1;

    }

    return -1;
}

bool cmp(cub_prim a, cub_prim b){

    if(a.cp != b.cp)
        return (a.cp > b.cp);

    return (a.poz < b.poz);
}

void read(){

    cin >> n;
    ull t = 0;

    for(int i = 0; i < n; i++){

        cin >> x;
        t = bs(x);

        if(t != -1){

            ++p;
            a[p].poz = i + 1;
            a[p].val = v[t];
            a[p].cp = x;

        }
        
    }

}

void solve(){

    cout << p + 1 << "\n";
    sort(a, a + 1 + p, cmp);
    
    for(int i = 0; i <= p; i++)
        cout << a[i].poz << " " << a[i].val << " " << a[i].cp << "\n";

}

int main(){

    ios :: sync_with_stdio(false);

    eratostene();
    read();
    solve();

}