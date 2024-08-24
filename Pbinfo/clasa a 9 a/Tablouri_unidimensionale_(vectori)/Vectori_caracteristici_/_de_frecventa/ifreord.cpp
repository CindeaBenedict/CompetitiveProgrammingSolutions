#include <fstream>
#include <bitset>
using namespace std;
bitset <100001> a;
int main()
{
    ifstream f("cifreord.in");
    ofstream fout("cifreord.out");
    int n,fr[10];
    f>>n;
    int a,i,j;
    for(i=0;i<=9;i++)
    fr[i]=0;
    for(i=1;i<=n;i++)
    {
        f>>a;
        if(a==0) fr[0]++;
        while(a>0)
        {
            fr[a%10]++;
            a=a/10;
        }
    }
    int cnt=0,x;
    for(i=0;i<=9;i++)
    {  x=fr[i];
    
        for(j=1;j<=x;j++)
    {fout<<i<<" "; cnt++;
     if(cnt==20) {cnt=0; fout<<endl;}
    }}
}