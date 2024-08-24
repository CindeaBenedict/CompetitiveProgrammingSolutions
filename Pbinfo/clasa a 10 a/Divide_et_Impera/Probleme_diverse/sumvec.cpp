#include <iostream>
using namespace std;
int v[1001], n;


long long divide(int s, int d) {
    int mij, l1, l2;
    if(s==d)
        return v[s];
    else {
        mij = (s+d)/2;
        l1 = divide(s,mij);
        l2 = divide(mij+1,d);
        return l1 + l2;
    }
}

int main() {
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>v[i];
    cout<<divide(1,n);
}