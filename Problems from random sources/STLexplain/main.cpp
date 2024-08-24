#include <iostream>
#include <vector>
using namespace std;


int main() {
   vector<int> a;
   int n,x,s=0;
   cin>>n;
   for(int i=1;i<=n;i++){
       cin>>x;
       a.push_back(x);
   }
   ///afisam elemente din vector
   for(int i=0;i<a.size();i++){
       cout<<a[i]<<" ";
       a.pop_back();
       a.pop_back();
   }
   cout<<endl;
   for(int i=0; i<a.size(); i++)
       cout<<a[i]<<" ";

    for(int i=0; i<a.size(); i++)
        s=s+a[i];
    cout<<endl;
    cout<<s;
    return 0;
}
