#include <iostream>

using namespace std;
bool prim(int x){
for(int i=2;i*i<=x;i++)
    if(x%i==0)return false;
    return true;
}

int main()
{
    int n,a,b,og=0,cnt=0,aux=0;
    cin>>a>>b;

        if(a>b) swap(a,b);
for(n=a;n<=b;n++){
        og=0;
        aux=n;
        while(aux>0){
            og=og*10+aux%10;
            aux=aux/10;
        }
        if(prim(og)) cout<<n<<" ";
}
    return 0;
}
