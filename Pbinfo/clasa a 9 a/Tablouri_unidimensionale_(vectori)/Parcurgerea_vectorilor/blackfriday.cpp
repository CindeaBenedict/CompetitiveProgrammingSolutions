#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("blackfriday.in");
    ofstream fout("blackfriday.out");
    long long n,i,j,a[11],b[11];
    fin>>n;
    for(i=1;i<=n;i++)
   	fin>>a[i];
    for(j=1;j<=n;j++)
    fin>>b[j];
    double procent=0;
    int poz;
        for(i=1;i<=n;i++)
        {
        double x=b[i]*100.0/a[i];
        double ieftinire=100-x;
            if(ieftinire>procent) {procent=ieftinire;poz=i;}
        }
        fout<<poz;  
     return 0;
}