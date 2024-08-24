#include <iostream>

using namespace std;
int st[1000]= {0},n;
int card[1000];
void afiseaza(int p)
{
    for(int i=1; i<=p; i++)
        cout<<st[i]<<" ";
    cout<<endl;
}
void baack(int p)
{
    int pval;
    for(pval=1; pval<=card[p]; pval++)
        st[p]=pval;
    if(p==n) afiseaza(p);
    else baack(p+1);
}

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>card[i];
    baack(1);
    return 0;
}
