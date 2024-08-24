#include <iostream>
#include<fstream>

using namespace std;
bool ciur[2000000];

int main()
{
    ifstream fin("ciur.in");
    ofstream fout("ciur.out");
    int x,cnt=0,i,j;
    fin>>x;
    ciur[0]=ciur[1]=1;
    for(i=2;i<=x;i++)
   {
    if(ciur[i]!=1)
    {
    ciur[i]=0; cnt++;
    for(j=2;j*i<=x;j++) ciur[j*i]=1;
}
}
    fout<<cnt;
    return 0;
}
