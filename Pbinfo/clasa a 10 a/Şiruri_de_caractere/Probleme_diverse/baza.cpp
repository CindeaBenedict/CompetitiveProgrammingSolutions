#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("baza.in");
ofstream cout("baza.out");

void inmultire(int a[] , int& n , int x)
{
    int t = 0;
    for(int i = 1 ; i <= n ; ++i)
    {
        a[i] = a[i] * x + t;
        t = a[i] / 10;
        a[i] %= 10;
    }
    while(t)
    {
        a[++n]=t%10;
        t/=10;
    }
}

void adunare(int a[] , int &n , int x)
{
    int t = a[1] + x;
    a[1]=t%10;
    t/=10;
    int i = 2;
    while(t && i <= n)
    {
        int s = a[i] + t;
        a[i]=s%10;
        t = s/10;
        i++;
    }
    while(t)
    {
        a[++n]=t%10;
        t/=10;
    }
}

int main()
{
    char s[51];
    cin >> s;
    int a[1500]={0} , n = 1;
    adunare(a , n , s[0]-'a');
    for(int i = 1 ; i < strlen(s) ; ++i)
        inmultire(a , n , 26) , adunare(a , n , s[i]-'a');
    for(int i = n ; i >=  1; --i)
        cout << a[i];
    return 0;
}