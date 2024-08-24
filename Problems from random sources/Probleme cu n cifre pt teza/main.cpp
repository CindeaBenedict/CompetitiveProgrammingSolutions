///Afisarea divizorilor unui numar
 /**

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
            if(n%i==0)
            cout<<i<<" ";

    }
    return 0;
}
*/

///Afisarea numerelor pana la n divizibile cu 2 sau 3 sau altceva
/**
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0)
            cout<<i<<" ";
    }
return 0;
}*/




///Descompunerea in factori prim
/*** #include <iostream>
using namespace std;
int main(){
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
        cout<<d<<" ^ "<<p<<endl;
    d++;
}
return 0;
}
*/




///Daca este patrat perfect sau nu
/***#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(sqrt(n)==(int)(sqrt(n))){
       cout<<"Este patrat perfect";
       }
       else
        cout<<"F";
return 0;}*/




///Sa afisezi daca este perfect
/**#include <iostream>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    if(s==n){
        cout<<"Este perfect";
    }
    else
        cout<<"Nu este perfect";
    return 0;
}*/




///Sa se afiseze numerele perfecte pana la n
/**#include <iostream>
using namespace std;
int main(){
    int n,s;
    cin>>n;
    for(int i=1;i<=n;i++){
            s=0;
        for(int j=1;j<=i/2;j++){
            if(i%j==0)
                s=s+j;

        }
        if(s==i)
            cout<<i<<" ";

    }

return 0;
}
*/



///Sa se afiseze patratele perfecte pana la n
/**#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(sqrt(i)==(int)(sqrt(i))){
            cout<<i<<" ";
        }
    }

return 0;}*/




///Suma divizorilor
/**#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    for(int i=1;i<=n;i++){
        if(n%i==0)
            s=s+i;
    }
    cout<<s;
    return 0;
}*/





///Numarul de divizori
/**#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0)
            cnt++;
    }
    cout<<cnt;
    return 0;
}*/



///Daca numarul este prim
/***#include <iostream>
using namespace std;
int main() {
    int i,n;
    bool isPrime=true;
    cout<<"Enter a positive integer: ";
    cin>>n;
    if(n==0||n==1) {
        isPrime=false;
    }
    else {
        for (i=2;i<=n/2;++i) {
            if(n%i==0) {
                isPrime=false;
                break;
            }
        }
    }
    if(isPrime)
        cout<<n<<" is a prime number";
    else
        cout<<n<<" is not a prime number";
    return 0;
}*/




///De afisat oglinditul unui numar
/**#include <iostream>
using namespace std;

int main() {
    int n,ogl=0;
    cin>>n;
    while(n!=0){
        ogl=ogl*10+n%10;
        n=n/10;

    }
    cout<<ogl;

    return 0;
}*/



///Cuburile perfecte pana la n
/**#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(cbrt(i)==(int)(cbrt(i))){
            cout<<i<<" ";
        }
    }

return 0;}*/
