#include <iostream>

using namespace std;

int main()
{
    int a[100],n,s=0;///il declaram, nu il initializam     ///100 reprezinta dimensiunea maxima, si n reprezinta dimensiunea efectiva
    ///Pozitia= index, run;
    cin>>n;///il citim pe n;

    for(int i=1; i<=n; i++) ///Prelucram pe a[i];
    {
        cin>>a[i];
 s=s+a[i];

    }
cout<<s;

    return 0;
}
