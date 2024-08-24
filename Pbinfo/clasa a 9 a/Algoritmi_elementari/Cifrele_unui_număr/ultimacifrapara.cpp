#include <iostream>

using namespace std;

int main()
{
    
    int n,par=0,cnt=0;
    cin>>n;
    if(n==0)
        cout<<"0";
    else{
        while(n>0)
        {if(n%10%2==0)
        {
            par=n%10;
            cnt++;
                break;
        }
      n=n/10;
        }
        if(cnt==0)
        cout<<"-1";
        else
           cout<<par;
    }
        return 0;
}
            
               