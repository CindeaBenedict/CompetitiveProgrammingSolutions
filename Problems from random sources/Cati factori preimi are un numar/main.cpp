#include <iostream>

using namespace std;

int main()
{
  int cnt=0,n,d,p;
  cin>>n;
  d=2;
  while (n>1)
  {
      p=0;
      while(n%d==0)
        {n=n/d;
    p++;
    }
    if(p>0) cnt++;
    d++;
  }
  cout<<cnt;
    return 0;
}
