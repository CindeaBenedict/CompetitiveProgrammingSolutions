/*#include <iostream>


using namespace std;


int main()
{
    int n,p,d=2;
    cin>>n;
    while(n>1)
    {
        p=0;
        while(n%d==0) { n=n/d;
        p++;
        }
       if (p>0) cout<<d<<"^"<<p<<endl;
       d++;}


    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int n,p,d=2;
    cin>>n;
    while(n>1){
        p=0;
        while(n%d==0){
            n=n/d;
            p++;
        }
        if(p>0){
            cout<<d<<"^"<<p<<endl;
            d++;
        }
    }
    return 0;
}
*/






#include <iostream>
using namespace std;
int main(){
int n,p,d=2;
cin>>n;
while(n>1){
    p=0;
    while(n%d==0){
        n=n/d;
        p++;
    }
    if(p>0){
        cout<<d<<"^"<<p<<endl;
        d++;
    }


}
return 0;
}
