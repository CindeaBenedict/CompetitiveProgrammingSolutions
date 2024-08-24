#include <fstream>
#include <map>///ii ca o matrice mai fancy in care is stocate si pozitiile sau niste id-uri pt fiecare element
#include <string>
using namespace std;
ifstream cin("sortcuv.in");
ofstream cout("sortcuv.out");
int main(){
    map<string, int>  M;
    string s;
    while(cin>>s)
        M[s]++;
    for(auto x:M){
        for (int i=1;i<=x.second;++i) ///first mi valorile din strinng
        ///second mi id-urile pe care le-am dat la fiecare ca de ce nu
        /// ii mai usor sa invat o libnrarie nou decat sa o fac singur
            cout<<x.first<<"\n";
    }
    return 0;
}