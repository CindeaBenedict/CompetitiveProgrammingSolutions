#include <iostream>

using namespace std;

struct aniversare{
    int an,luna,zi;
}anv;

int main()
{
    int n,val;
    long long v[1000],Min=999999,Max=0;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>anv.an>>anv.luna>>anv.zi;
        val=anv.an*365+anv.luna*30+anv.zi;
        v[i]=val;
    }
    int iMax=0,iMin=0;
    for (int i=1; i<=n; i++)
    {
        if (v[i]>Max){
            Max=v[i];
            iMax=i;
        }
        if (v[i]<Min){
            Min=v[i];
            iMin=i;
        }
    }
    cout<<iMax<<" "<<iMin;
}