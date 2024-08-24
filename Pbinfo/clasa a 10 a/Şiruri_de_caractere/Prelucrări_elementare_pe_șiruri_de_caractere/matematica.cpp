#include <bits/stdc++.h> //DaryuF

using namespace std;
const string file_name="matematica";
ifstream in(file_name+".in");
ofstream out(file_name+".out");
#define cin in
#define cout out
string s;
int c;
vector <long long> v;
int main()
{int semn=1,i=0;
cin>>c>>s;
s+='+';
if(s[0]=='-') semn=-1,i++;
while(i<s.size())
{
 long long nr=0;
 while(isdigit(s[i]))
  nr=nr*10+s[i]-'0',i++;
  v.push_back(nr*semn);
  if(s[i]=='+') semn=1;
  else semn=-1;
  i++;
}
long long mini=100000000000000000,ss=0;
for(auto i:v)
{
    ss+=i;
    mini=min(i,mini);
}
if(c==1)cout<<ss;
else
    cout<<ss-mini-mini;

    return 0;
}