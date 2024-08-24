#include <fstream>
using namespace std;
ifstream f("Div3.in");
ofstream ft("Div3.out");
int main()
{
    int n,m,nrdiv = 0;
   f>>m;
    while(m--){
    f>>n;
    for(int d=1;d<=n;d++)
        if(n%d==0)
            nrdiv++;
    if (nrdiv==3)
    ft<<"1"<<endl;
    else
    ft<<"0"<<endl;
        nrdiv=0;
    }

}

