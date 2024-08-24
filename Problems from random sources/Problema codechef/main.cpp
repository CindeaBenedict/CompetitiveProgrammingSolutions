#include<iostream>
using namespace std;

int main() {

long long int n,lead=0,win,s1,s2,i;
cin >> n;
for(i=0;n>i;i++)
{
cin >> s1 >> s2;
if(s1>s2)
{
if((s1-s2)>lead)
{
lead=s1-s2;
win=1;
}
}
else if(s2>s1)
{
if((s2-s1)>lead)
{
lead=s2-s1;
win=2;
}
}
}
cout << win << " " << lead;
return 0;
}
