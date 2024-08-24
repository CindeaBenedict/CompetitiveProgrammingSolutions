#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a,b;
    ifstream fin("adunare.int");
    ofstream fout("adunare.out");
    fin>>a>>b;
    fout<<a+b<<endl;
    return 0;
}
