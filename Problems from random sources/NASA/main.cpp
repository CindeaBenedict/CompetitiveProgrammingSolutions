#include <fstream>
#include <bitset>
#include <math.h>

using namespace std;

const int P = 46335;

int a, b, prime;

bitset <P+10> ciur;
bitset <100000000> v;
int A[P+10];

ifstream cin("nasa.in");
ofstream cout("nasa.out");

inline int abs(int a)
{
    if( a> 0)
        return a;
    return -a;
}
int main()
{
    cin >> a >> b;
    int p = P;
    if(p > b)
        p = b;
    for(int i = 2 ; i <= p ; ++ i)
        if(!ciur[i])
        {
            ++prime;
            A[prime] = i;
            for(int j = i + i ; j <= p ; j += i)
                ciur[j] = 1;
        }

int nr=(b-a+1);
    for(int i = 1 ; i <= prime && ((A[i]*A[i])<=b) ; ++ i )
        for(int j = ceil( ((double)a)/(A[i]*A[i]) ) ; j <= floor(((double)b)/(A[i]*A[i])) ; j ++ )
        {
            if(!v[A[i]*A[i]*j-a])
            {
                v[A[i]*A[i]*j-a] = 1;
                nr--;
            }
        }

    cout << nr << "\n";
    return 0;
}
