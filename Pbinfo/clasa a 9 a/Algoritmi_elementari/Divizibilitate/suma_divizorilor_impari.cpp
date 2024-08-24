#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=0;
    for(int i=1;i*i<=n;i++)
    {
       if(n%i==0)
       {
           if(i%2==1)
                s=s+i;
           if(i*i<n)
           {
               if(n/i%2==1)
                    s=s+n/i;
           }
       }
    }
    cout<<s;
    return 0;
}