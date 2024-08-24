///Numere perfecte pana la 500
#include <iostream>

using namespace std;

int main()
{
    int n,s=0;
    for(n=1;n<=500;n++){
        s=0;
        for(int i=1;i<=n/2;i++)
            {


    if(n%i==0)
        s=s+i;}
        if(s==n)
            cout<<n<<endl;
    }
    return 0;
}

///Descompunerea in factori primi
/*#include <iostream>
using namespace std;
int main()
{
 int n,d,p;
 cin>>n;
 d=2;
 while(n>1){
    p=0;
    while(n%d==0){
        n=n/d;
        p++;
    }
if(p>0)
    cout<<d<<"^"<<p<<endl;
    d++;
 }

 return 0;
}**/
///Afisati divizorii unui numar
