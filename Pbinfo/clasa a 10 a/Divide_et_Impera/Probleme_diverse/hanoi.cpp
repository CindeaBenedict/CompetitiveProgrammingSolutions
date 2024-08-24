#include <fstream>

using namespace std;

ifstream fin ("hanoi.in");
ofstream fout ("hanoi.out");

int n,nr=1;
char a='A', b='B', c='C';

void Hanoi (int n, char a, char b, char c)
{
    if (n==1) fout<<a<<"->"<<c<<endl;
    else
    {
        Hanoi(n-1,a,c,b);
        fout<<a<<"->"<<c<<endl;
        Hanoi (n-1,b,a,c);
    }
}

int main()
{
    fin>>n;
    for (int i=1; i<n; i++) nr=nr*2+1;
    fout<<nr<<endl;
    Hanoi(n,a,b,c);
    fin.close();
    fout.close();
    return 0;
}