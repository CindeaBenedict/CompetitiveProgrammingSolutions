#include <iostream>

using namespace std;

int n, x[101], s[101];
void Afisare()
{
    for(int i = 1; i <= n; ++i)
       cout << x[i] << " ";
    cout << '\n';
}

bool Ok(int k)
{
    if(s[x[k]] == 1)return false;
    if(k == ((n/2) + 1) && x[k] != n)return false;
    return true;
}
void Back(int k)
{
    if(k == n + 1)
    {
        Afisare();
        return;
    }
    for(int i = 1; i <= n; ++i)
    {
       x[k] = i;
       if(Ok(k))
       {
           s[i] = 1;
           Back(k + 1);
           s[i] = 0;
       }
          
    }
}
int main(){
   cin >> n;
   Back(1);
   return 0;
}