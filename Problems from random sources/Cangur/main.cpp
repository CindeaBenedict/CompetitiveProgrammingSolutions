#include <fstream>
using namespace std;
ifstream f("cangur.in");
ofstream ft("cangur.out");
int main()
{
    int n,cnt=0,s=0;
    f>>n;
   for(int i=1;i<=n;i++){
    cnt++;
    if(cnt==1)
        s=7;
    else
        s=s+s*10;
   }
   if(n>=2)
   ft<<s+(cnt-1)*7;
   else
    ft<<s;


}

