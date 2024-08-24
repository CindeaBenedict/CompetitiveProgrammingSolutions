/*#include <iostream>

using namespace std;
///Cerință: Să se determine suma divizorilor unui număr.
int main()
{
    int i,s=0,n;
    cin>>n;
    for(i=1;i<=n;i++){
    if(n%i==0){
        s=s+i;
    }}
    cout<<s;
    return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
int i,s=0,n;
cin>>n;
for(i=1;i<=n;i++){
        if(n%i==0){
            s=s+i;
        }
}
cout<<s;
return 0;
}
