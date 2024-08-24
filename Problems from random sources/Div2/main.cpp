
#include <fstream>

using namespace std;
ifstream fin("Div3.in");
ofstream fout("Div3.out");
int main()
{

    int n,m;
    int nrdiv = 0;
    fin>>m;
    while(m--){
    fin >> n;



    for(int d = 1; d <= n; d++) {
        if(n % d == 0) {
            nrdiv++;
        }
    }


    if (nrdiv==3)
    fout<<"1"<<endl;
    else
    fout<<"0"<<endl;
        nrdiv=0;
    }
    return 0;
}
