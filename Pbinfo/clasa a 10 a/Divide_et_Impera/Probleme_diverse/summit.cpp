#include <fstream>
using namespace std;

ifstream cin("summit.in");
ofstream cout("summit.out");

long long int s[1000001];

int cb(int n,int i)
{
    int st=1 , dr=i;
    while(st<=dr){
        int mij = (st + dr) / 2;
        if(s[mij]==n)
            return mij;
        if(s[mij]<n)
            st = mij + 1;
        else
            dr = mij - 1;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int x;
    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> x;
        s[i]=s[i-1]+x;
        int val = cb(x , i);
        if(s[val]==x)
            cout << val << '\n';
        else
            cout << 0 << '\n';
    }
    return 0;
}