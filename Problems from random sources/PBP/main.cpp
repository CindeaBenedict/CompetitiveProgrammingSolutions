#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<"Primul copil este mai mare cu "<<a-b<<" ani.";
          else if(a<b)
               cout<<"Al doilea copil este mai mare cu "<<b-a<<" ani.";
              else cout<<"Copiii au varste egale ";
    return 0;
}
