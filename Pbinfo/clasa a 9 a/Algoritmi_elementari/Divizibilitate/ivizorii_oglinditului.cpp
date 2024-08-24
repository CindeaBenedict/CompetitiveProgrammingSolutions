#include <iostream>
using namespace std;
int main(){
    
 int n,i,og=0;
    cin>>n;
      
    while(n!=0)
    {
        og=og*10+n%10;
        n=n/10;
    }
    n=og;
    int c=0;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
            if(i*i<n)
            {
                c++;
            }
        }
    }
        cout<<c;
        return 0;
       }
            
   