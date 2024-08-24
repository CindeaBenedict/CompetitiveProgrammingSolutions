#include <iostream>

using namespace std;

int main()
{
    int n,d,s=0;
    cin>>n;
    for(d=1;d<=n/2;d++)
            if(n%d==0)
            s=s+d;

            if(n==s)
                cout<<n<<"numarul este perfect";
            else
                cout<<n<<" numarul nu este perfect";



    return 0;
}
