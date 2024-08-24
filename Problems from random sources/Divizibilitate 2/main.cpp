#include <iostream>

using namespace std;

int main()
{
    int x,y,A,B;
    cin>>x>>y;
    for(A=0;A<=9;A++)
      for(B=0;B<=9;B++)
      if((x+y+A+B)%9==0)
   cout<<x<<A<<y<<B<<" ";
    return 0;
}
