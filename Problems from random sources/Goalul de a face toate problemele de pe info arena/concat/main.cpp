#include <iostream>

using namespace std;
int concat(int a,int b){
    int cnt=0,aux=0,c=0;
    aux=b;
    while(aux){
        aux=aux/10;
        cnt++;
    }

    for(int i=1;i<=cnt;i++)
    a=a*10;
    a=a+b;
    return a;


}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<concat(n,m)<<endl;
    return 0;
}
