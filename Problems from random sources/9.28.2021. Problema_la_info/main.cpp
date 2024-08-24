#include <iostream>

using namespace std;

int main()
{
    int n,s=0;
    cin>>n;
    while (n!=0)
    {
        s=s+n;
        cin>>n;
    }
      cout<<s;

    return 0;
}
