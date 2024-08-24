#include <iostream>
#include <fstream>

using namespace std;
int fr[10];
ifstream fin("minnrk.in");
ofstream fout("minnrk.out");
int main()
{
    unsigned long long n,k;
    int cnt=0;
    fin >> n>>k;
    while (n)
    {
        fr[n%10]++;
        n/=10;
    }
    for (int i = 1; i<=9; i++)
        if (fr[i])
        {
            fout << i;
            fr[i]--;
            cnt++;
            break;
        }
      if(cnt<k){
      for (int i = 0; i<=9; i++)

    {
        while (fr[i])
        {
            cnt++;
            fout << i;
            if(cnt==k)break;
            fr[i]--;
        }
        if(cnt==k)break;
    }}
    return 0;
}
