#include<fstream>
#include<algorithm>
using namespace std;
int n,x,y;
struct spectacol
{int inceput, sfarsit;
};


spectacol a[100];
ifstream fin("spectacole.in");
ofstream fout ("spectacole.out");
void ordonare(){ 
int i, j;
for(i=1;i<n; i++)
for(j=i+1;j<=n; j++)
if(a[i].sfarsit>a[j].sfarsit)
    swap(a[i], a[j]);}
int greedy(){
spectacol sol[100];
int i,k;
k=1;
sol[1]=a[1];
for(i=2;i<=n;i++)
    if(sol[k].sfarsit<=a[i].inceput)sol[++k]=a[i]; 

    return k;}


int main()
{fin>>n;
for (int i=1;i<=n; i++)fin>>a[i].inceput>>a[i].sfarsit;

ordonare();
fout<<greedy();
 return 0;}
