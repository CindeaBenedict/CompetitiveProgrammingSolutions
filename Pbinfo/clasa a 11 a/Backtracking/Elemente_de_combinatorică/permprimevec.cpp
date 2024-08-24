#include <bits/stdc++.h>
using namespace std;

int A[16],X[16],n, P[16];
bool prime(int nr)
{
    if(nr==2)
        return 1;
    if(nr<2)
        return 0;
    if(nr%2==0)
        return 0;
    for(int d=3; d*d<=nr; d+=2)
        if(nr%d==0)
            return 0;
    return 1;
}
void scrie()
{
    for(int i=1;i<=n;i++)
        cout<<A[X[i]]<<" ";
    cout<<"\n";
}

int ok(int k)
{
    if(k>1)
        if(prime(A[X[k-1]]) && prime(A[X[k]]))
            return 0;
    return 1;
}

void back(int k)
{
    for(int i=1;i<=n;i++)
        if(!P[i])
        {
            X[k]=i;
            P[i]=1;
            if(ok(k))
            {
                if(k==n) scrie();
                else back(k+1);
            }
            P[i]=0;
        }
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>A[i];
    for(int i=1; i<n; ++i)
        for(int j=i+1; j<=n; ++j)
                if(A[i]>A[j])
                    swap(A[i],A[j]);
    back(1);
    return 0;
}