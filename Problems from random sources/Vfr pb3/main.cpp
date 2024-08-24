#include <iostream>
#include <fstream>

using namespace std;
int fr[10];
int main()
{
    long long a,x=0;
    ifstream fin("maxnr.in");
    cin>>a;
    while(a>0)
    {
        fr[a%10]++;
        a=a/10;
    }
    for(int i=9;i>=0;i--)
        for(int j=1;j<=fr[i];j++)

    x=x*10+i;
    ofstream fout("maxnr.out");
    cout<<x;
    return 0;
}
