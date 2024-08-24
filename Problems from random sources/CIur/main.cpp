#include <iostream>
#include <bitset>
using namespace std;
bitset <1000000> ciur;
int main()
{

  int n,i,j;

  cin>>n;

  int ciur[n+1];

  ciur[0]=ciur[1]=1;

  for(i=1;i<=n;i++)

  if(ciur[i]!=1){

    ciur[i]=0;

    for(j=2;j*i<=n;j++)

        ciur[j*i]=1;}

    for(i=2;i<=n;i++)

        if(ciur[i]==0)

        cout<<i<<" ";

    return 0;
}
