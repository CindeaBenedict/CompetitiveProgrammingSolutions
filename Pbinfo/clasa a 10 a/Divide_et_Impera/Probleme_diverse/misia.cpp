
#include<bits/stdc++.h>
using namespace std;
ifstream fin("comisia.in");
ofstream fout("comisia.out");
long long n,s[200005],dp[200005][20],l[200005],mn(1e18+7);
long long qr(long long st,long long dr){
    long long lg(l[dr-st+1]);
    return max(dp[st][lg],dp[dr-(1<<lg)+1][lg]);
}
void sim(long long p){
    long long l(dp[p][0]),pi(p);
    while(p-pi+1<l&&l+pi-1<=n){
        p=pi+l-1;
        l=qr(pi,p);
    }
    if(p-pi+1==l&&pi+l-1<=n)mn=min(mn,s[p]-s[pi-1]);
}
int main(){
    fin>>n;
    for(long long i=1;i<=n;i++)fin>>dp[i][0];
    for(long long i=1;i<=n;i++)fin>>s[i],s[i]+=s[i-1];
    for(long long i=2;i<=n;i++){
        l[i]=l[i-1];
        if(!(i&(i-1)))l[i]++;
    }
    for(long long i=1;(1<<i)<=n;i++){
        for(long long j=1;j+(1<<i)-1<=n;j++){
            dp[j][i]=max(dp[j][i-1],dp[j+(1<<(i-1))][i-1]);
        }
    }
    for(long long i=1;i<=n;i++)sim(i);
    fout<<mn;
    return 0;
}