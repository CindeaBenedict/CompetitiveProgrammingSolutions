#include <iostream>

using namespace std;

int main()
{   int n,i,x,secv=0,secv_start,best_secv=0,best_start;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
        {if(secv==0) secv_start=i;
            secv++;
            if(secv>best_secv){
                best_secv=secv;
                best_start=secv_start;
            }
        }

        else
            secv=0;
    }
    return 0;
}