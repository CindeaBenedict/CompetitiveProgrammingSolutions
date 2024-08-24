#include <iostream>
using namespace std;
long long  nrmaxim(long long n)
{
    long long putereavietii=1,p=0,maxim=-1;
    long long aux=n;
    while(aux!=0)
    {
      putereavietii=putereavietii*10;
        p++;
        aux=aux/10;
    }
    while(p!=0)
    {
        n=n%(putereavietii/10)*10+n/(putereavietii/10);
        if(n>maxim) maxim=n;
        p--;
    }
    return maxim;
}
int main(){
    int a;
    cin>>a;
    cout<<nrmaxim(a)<<endl;
    return 0;
}
