#include <iostream>
using namespace std;

int v[101], n;
bool exista = false;

int imp(int s, int d) {
    int mij, l1, l2;
    if(d!=s) {
        mij = (s+d)/2;
        l1 = imp(s,mij);
        l2 = imp(mij+1,d);
        if(v[l1]%2==1 || v[l2]%2==1) {
            exista = true;
            return 0;
        }
    } else {
        if(v[s]%2==1)
            exista = true;
    }
}

int main() {
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>v[i];
    imp(1,n);
    if(exista)
        cout<<"DA";
    else 
        cout<<"NU";
}