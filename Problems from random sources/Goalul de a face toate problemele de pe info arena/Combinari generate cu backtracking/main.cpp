#include <iostream>

using namespace std;
int st[1000]= {0},n,b;
void afiseaza(int p)
{
    for(int i=1; i<=n; i++)
        cout<<st[i]<<" ";

    cout<<endl;
}
void back(int p)
{
    int pval;
    for(pval=st[p-1]+1; pval<=b; pval++)
    {
        st[p]=pval;
        if(p==n) afiseaza(p);
        else back(p+1);
    }
}
int main()
{
    cin>>n>>b;
    back(1);
    return 0;
}
