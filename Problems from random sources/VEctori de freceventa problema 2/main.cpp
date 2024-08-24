#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin("cfdist.in");
    long long a;
    int fr1[10]={0};
    int i,cnt=0;
    cin>>a;
    while(a>0)
    {
        fr1[a%10]++;
        a=a/10;
    }
    for(i=0;i<=9;i++)
        if(fr1[i]!=0) cnt++;
    ofstream cout("cfdist.out");
    cout<<cnt;
    return 0;
}
