#include <bits/stdc++.h>

using namespace std;

long long int a,b,c,imp,par;
int main()
{
    cin>>a>>b>>c;
    if(a%2==1)imp++;
    else par++;
    if(b%2==1)imp++;
    else par++;
    if(c%2==1)imp++;
    else par++;
    if(par>imp)cout<<"pare";
    else cout<<"impare";

    return 0;
}