#include <iostream>

using namespace std;
int main()
{
    int a, n;
    cin >> n;
    int I = 0, J = 0;///I este pozitia de unde incepe secventa cu elementele egale cu 0, 
    ///iar J este pozitia unde se termina secventa cu elementele egale cu 0
    int i0 = 1;///inceputul secventei curente
    int l = 1;///lungimea secventei curente
    int lmax = 0;///lungimea maxima a unei secvente numai cu zero-uri 
    for (int i = 1; i <= n; ++i)
    {
        cin >> a;
        if (a == 0)///verificam daca elementul este egal cu 0
        {
            
            l++;///crestem lungimea secventei curente
            if (l == 1)
                i0 = i;///inceputul secventei curente = pozitia i 
        }
        else
        {
            l = 0;
        }
        if (l > lmax)///aflam maximul 
            {
                lmax = l;///lungimea maxima a secventei numai cu 0-uri = lungimea secv curente
                I = i0;
                J = i;
            }
        
    }   
    cout << I << ' ' << J;
}