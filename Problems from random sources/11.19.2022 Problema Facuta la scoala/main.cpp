#include<iostream>
using namespace std;
int main()
{
    int n;
    int a,b,c;
    int x,y,z;
    cin>>n;
    cin>>a>>b>>c;
    int dp[1000];
    dp[0]=0;
    for(int i=1;i<=n;++i)
    {
        x=y=z=-1;
        if(i>=a)
            x=dp[i-a];
        if(i>=b)
            y=dp[i-b];
        if(i>=c)
            z=dp[i-c];
        if(x==-1 && y==-1 && z==-1)
            dp[i]=-1;
        else
            dp[i]=max(max(x,y),z)+1;
    }
        cout<<dp[n]<<endl;
    return 0;
}