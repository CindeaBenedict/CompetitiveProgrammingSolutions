#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int n;
int x[40];
bool p[40];
int nrsol;
void Cerc(int k);
void ScrieSol();
bool PatratPerfect(int k);
bool OK(int k);
int main(){
cin>>n;
if(n<4)
cout<<"nu exista";
else{
    x[1]=1;
    p[1]=true;
    Cerc(2);
    if(nrsol==0)
    cout<<"nu exista";
}
}

void Cerc(int k){
    if(k>n){
        ScrieSol();
        exit(0);
        return;
    }
    for (int i=2;i<=n;++i){
        x[k]=i;
        if(OK(k)){
            p[i]=true;
            Cerc(k+1);
            p[i]=false;
        }
    }
}

bool OK(int k){
    if(p[x[k]]) return false;
    if(!PatratPerfect(x[k]+x[k-1]))
    return false;
    if(k==n && !PatratPerfect(x[1]+x[n])){
return false;
    }
    return true;
}
bool PatratPerfect(int n){
 int rad =sqrt(n);
 if(rad*rad==n)
 return true;
 return false;

}
void ScrieSol(){
nrsol++;
for(int i=1;i<=n;++i)
cout<<x[i]<<' ';

}