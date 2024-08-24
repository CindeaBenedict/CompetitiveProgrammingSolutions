#include <iostream>

using namespace std;
int nr_prim(int n)
{
    n++;
    while(1)
    {
        int cnt=0;
        for(int i=1;i*i<=n;++i)
        {
            if(cnt>2)
            break;
            if(n%i==0)
            cnt+=2;
            if(i*i==n)
            cnt--;
        }
        if(cnt==2)
        {
            return n;
            break;
        }
        else
        n++;
    }
}
int main()
{int a;
cin>>a;
    cout <<nr_prim(a) << endl;
    return 0;
}
