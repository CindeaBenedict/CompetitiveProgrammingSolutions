#include <fstream>
#include <bitset>
using namespace std;
long long a;
int main()
{
    ifstream f("cifreord1.in");
    ofstream fout("cifreord1.out");
    int n,fr[10]={0},i,j;
    while(f>>a){
    
        if(a==0) fr[0]++;
        while(a>0)
        {
            fr[a%10]++;
            a=a/10;
        }
    }
    int cnt=0,x;
    for(i=9;i>=0;i--)
    {  x=fr[i];
    
        for(j=1;j<=x;j++)
    {fout<<i<<" "; cnt++;
     if(cnt==20) {cnt=0; fout<<endl;}
    }}
}