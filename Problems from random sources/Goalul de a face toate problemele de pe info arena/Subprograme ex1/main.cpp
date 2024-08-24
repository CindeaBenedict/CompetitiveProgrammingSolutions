#include <iostream>

using namespace std;
/// Observam ca o anuita bucata de program se reeta identic pentru fiecare numar, de aceea bucata de program se va constitui in sub program
int suma_cifre(int n/* asta este parametru*/){
int s=0;
while (n!=0){
        s=s+n%10;
        n=n/10;
    }
    return s;
}
int main()
{ int a,b,c;
cin>>a>>b;
c=a+b;
cout<<suma_cifre(a)<<" "<<suma_cifre(b)<<" "<<suma_cifre(c)<<endl;

    return 0;
}

