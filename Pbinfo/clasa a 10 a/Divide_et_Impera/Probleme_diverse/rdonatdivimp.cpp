#include <iostream>
using namespace std;

int v[1001];

bool Cresc(int st, int dr, int x)
{
  if(st==dr) return v[st]>x;
  int mid=(st+dr)/2;
  return Cresc(st,mid,v[mid-1]) && Cresc(mid+1,dr,v[dr-1]);
}

bool Descresc(int st, int dr, int x)
{
  if(st==dr) return v[st]<x;
  int mid=(st+dr)/2;
  return Descresc(st,mid,v[mid-1]) && Descresc(mid+1,dr,v[dr-1]);
}

int main()
{
  int n;
  cin >> n;
  for(int i=1 ; i<=n ; ++i)
    cin >> v[i];
  if(Descresc(2,n,v[1])) cout << "strict descrescator";
  else if(Cresc(2,n,v[1])) cout << "strict crescator";
  else cout << "neordonat";
  
  return 0;
}