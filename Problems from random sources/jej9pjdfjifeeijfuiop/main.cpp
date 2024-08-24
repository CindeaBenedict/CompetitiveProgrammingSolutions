#include <fstream>

using namespace std;
ifstream fin ("cifreord.in");
ofstream fout("cifreord.out");

int main()
{
    int n,fr[21],t;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>t; fr[t++];
    }
    int cnt=1;
    for(int i=0;i<=9;i++){
        for(int j=1;j<=fr[i];j++){
            fout<<i<<" ";
            if(cnt%20==0)
                fout<<endl;
            cnt++;
        }
    }
    return 0;
}
