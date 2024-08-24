#include <fstream>
using namespace std;
ifstream cin("scmax.in");
ofstream cout("scmax.out");
int main()
{ int f=1;
   int n,mini=2000000000,aux=0,aux2=0,c=0,cnt=0;
   int v[10000],m[10000];
   cin>>n;
   for(int i=1;i<=n;i++)
    cin>>v[i];
   for(int i=1;i<=n;i++)
    if(v[i]<=mini){
    mini=v[i];
    aux=i;}
c=aux;
        for(int i=aux;i<=n;i++){
            if(i==aux)
                m[1]=v[i];
            else if(v[i]<v[i+1]||v[i]!=v[i+1]||v[i]!=v[i-1]){
                f++;
                m[f]=v[i];}
              else if(v[i]!=v[i-1]){
                    f++;
              m[f]=v[i];}
              if(v[i]==v[i+1]||v[i]==v[i-1]){
                i++;
                f++;

                }

                  if(v[i]>=v[i+1]){
                i++;
                f++;

                }}

    for(f=1;f<=n+1;f++)
        if(m[f]!=0)
     cnt++;
    cout<<cnt<<endl;

            for(f=1;f<=n;f++)
        if(m[f]!=0)
            cout<<m[f]<<" ";
}
