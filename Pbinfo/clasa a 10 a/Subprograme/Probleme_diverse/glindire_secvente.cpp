#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, nk, nr;
    vector <int>a;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    nk=n/k;
    for(int i=1; i<=n; ++i)
    {
        cin>>nr;
        a.push_back(nr);
    }
    int st=0, dr=k;
    for(int i=1; i<=nk; ++i)
    {
        reverse(a.begin()+st, a.begin()+dr);
        st+=k;
        dr+=k;
    }
    for(auto x: a)
        cout<<x<<" ";
    return 0;
}