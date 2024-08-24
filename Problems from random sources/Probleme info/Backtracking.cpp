#include <iostream>

using namespace std;
int st[10000]={0};
int n;
void afiseaza(int p)
{
    for(int i=1; i<=n; i++)
        cout<<st[i]<<" ";

    cout<<endl;

}
bool valid(int p)
{
    for(int i=1; i<p; i++)
        if(st[i]==st[p]) return false;
    return true;
}
void back(int p)
{
    int pval;
    for(pval=1; pval<=n; pval++)
    {
        st[p]=pval;
        if(valid(p))
        {
            if(p==n) afiseaza(p);
            else back(p+1);
        }
    }
}
int main()
{
    cin>>n;
    back(1);
    return 0;
}
