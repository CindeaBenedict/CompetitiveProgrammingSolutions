#include <iostream>

using namespace std;

int main()
{
    int a[100],n;///il declaram, nu il initializam     ///100 reprezinta dimensiunea maxima, si n reprezinta dimensiunea efectiva
    ///Pozitia= index, run;
    cin>>n;///il citim pe n;

    for(int i=1; i<=n; i++) ///Prelucram pe a[i];
    {
        cin>>a[i];


    }

    cout<<a[2]+a[3];
    return 0;
}
