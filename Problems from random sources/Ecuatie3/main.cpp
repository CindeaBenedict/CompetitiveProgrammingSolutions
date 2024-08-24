#include <fstream>
using namespace std;
ifstream fin("euctaie3.in");
ifstream fout("euctaie3.out");
int main()
{
    int a,b;
    fin>>a>>b;
    for(int x=1;x<=5000;++x)
    {
        for(int y=x;y<=20000;++y)
        {
            if(x*y*a==(x+y)*b)
                fout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}
