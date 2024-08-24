#include <iostream>

using namespace std;
bool ciur[2000000];

int main()
{
    int x,i,j;
    cin>>x;
    ciur[0]=ciur[1]=1;
    for(i=2;i<=x;i++)
   {
    if(ciur[i]!=1)
    {
     ciur[i]=0;
     for(j=2;j*i<=x;j++)
        ciur[j*i]=1;
    }
   }
   for(int i=2;i<=x;i++)
    if(ciur[i]==0)
    cout<<i<<" ";
    return 0;
}