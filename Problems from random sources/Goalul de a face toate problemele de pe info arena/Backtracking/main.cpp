#include <iostream>

using namespace std;
int n;
int st[1000];
///Vectorul stiva il declaram global

bool valid(int p)
{
    for (int i=1; i<=p;i++)
    if(st[i]==st[p])
        return false;
    return true;///In functia valid verificam daca exista un element in stiva

}
void afiseaza(int p){
for(int i=1; i<=n; i++)
cout<<st[i]<<" ";
cout<<endl;

}


void baack(int p){
    int pval;
for(pval=1; pval<=n; pval++)
{
st[p]=pval;
if(valid(p))
{if(p==n)
afiseaza(p);
else baack(p+1);}}}


int main()
{
    cin>>n;
    baack(1);
    return 0;
}
