#include <fstream>

using namespace std;

ifstream cin ("qclasa.in");
ofstream cout ("qclasa.out");

struct elev{
    int cod,med,abs;
}v[50];

int n,sumNota=0,tocilari=0,absMax1=0,absMax2=0;
elev qulangii[3];

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++) cin>>v[i].cod>>v[i].med>>v[i].abs;
    for (int i=1; i<=n; i++)
    {
        if (v[i].med==10) tocilari++;
        sumNota+=v[i].med;
    }
    qulangii[1]=v[1];
    qulangii[2]=v[1];
    for (int i=1; i<=n; i++)
    {
        if (v[i].abs>qulangii[1].abs || v[i].abs==qulangii[1].abs && v[i].cod<qulangii[1].cod)
        {
            qulangii[2]=qulangii[1];
            qulangii[1]=v[i];
        }
        else if (v[i].abs>qulangii[2].abs || v[i].abs==qulangii[2].abs && v[i].cod<qulangii[2].cod) qulangii[2]=v[i];
    }
    cout<<tocilari<<endl;
    cout<<sumNota/n<<endl;
    cout<<qulangii[1].cod<<" "<<qulangii[1].med<<" "<<qulangii[1].abs<<endl;
    cout<<qulangii[2].cod<<" "<<qulangii[2].med<<" "<<qulangii[2].abs<<endl;

    return 0;
}