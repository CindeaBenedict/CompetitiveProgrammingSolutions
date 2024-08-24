#include <fstream>
using namespace std;
ifstream fin("gusteri.in");
ofstream fout("gusteri.out");
unsigned long long n,m,p,a,b,cnt;

int main()
{

   fin>>n>>p>>m>>a>>b;
   for(int i=a;i<=b;i++)
   {
       n=n*p;
       n=n%m;
       cnt++;
       if(cnt-a!=b)
       fout<<n<<"\n";
       else if(cnt-a==b)
        fout<<n;


   }


    return 0;
}
