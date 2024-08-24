#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned int n;
    char a, b;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
        if (i%2==1){for(int j=1;j<=n;j++){
                        if(j%2==1) cout<<a;
                        else cout<<b;}
        }
        else if (i%2==0){for(int k=1;k<=n;k++){
                         if(k%2==1) cout<<b;
                         else cout<<a;}
        }
        cout<<endl;}
    return 0;
}