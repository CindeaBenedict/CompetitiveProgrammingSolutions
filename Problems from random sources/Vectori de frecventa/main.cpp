#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin("cfcomune.in");
    long long a,b;
    int fr1[10]={0},fr2[10]={0};
    cin>>a>>b;
    while(a>0)
    {
        fr1[a%10]++;
        a=a/10;
    }
    while(b>0)
    {
        fr2[b%10]++;
        b=b/10;
    }
    int i,cnt=0;
    for(i=0;i<=9;i++)
        if(fr1[i]!=0 && fr2[i]!=0) cnt++;
    ofstream cout("cfcomune.out");
    cout<<cnt;
    return 0;
}
