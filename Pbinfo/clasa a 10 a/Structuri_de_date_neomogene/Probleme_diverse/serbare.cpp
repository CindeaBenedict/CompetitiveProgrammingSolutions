#include <fstream>

using namespace std;

ifstream cin ("serbare.in");
ofstream cout ("serbare.out");

struct uniforma
{
    int copii;
    int tip;
}v[1005],x[12];

int n,p;

int main()
{
    cin>>n>>p;
    for (int i=1; i<=n; i++)
    {
        cin>>v[i].copii>>v[i].tip;
        int a=v[i].tip;
        x[a].copii+=v[i].copii;
        x[a].tip=a;
    }
    for (int i=1; i<=p; i++)
    {
        for (int j=1; j<=p; j++)
            if (x[i].copii>x[j].copii) swap(x[i],x[j]);
    }
    for (int i=1; i<=p; i++) cout<<x[i].tip<<" ";

    return 0;
}