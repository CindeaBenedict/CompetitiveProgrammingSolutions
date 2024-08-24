#include <iostream>

using namespace std;

int main()
{
    ///de afisat toate numerle din intervalul Ab in oridne descrescatoare, pare care nu sunt divizibile cu noua
    int a,b;
    cin>>a>>b;
    if(a>b){
        swap(a,b);
    }
    for(int i=b;i>=a;i--){
        if(i%9!=0){
            if(i%2==0){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}
