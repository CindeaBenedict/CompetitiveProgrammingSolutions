#include <iostream>

using namespace std;
int main()
{
    int x, n;
    cin >> n;
    int I = 0, J = 0;
    int i0 = 1;///inceputul secventei curente
    int lung = 1;///lungimea secventei curente
    int lmax = 0;///lungimea maxima a unei numai cu zero-i
    int b;///valoare anterioara citita
    
    cin >> b;  
    for (int i = 2; i <= n; ++i)
    {
        cin >> x;
        if (x == b)
        {
            if (i0 == 1)
                i0 = i;
            lung++;
            if (lung >= lmax)
            {
                lmax = lung;
                I = i0;
                J = i;
            }
        }
        else
        {
            lung = 1;
            i0 = i;
        }
        
        b = x;
    }   
    cout << I <<" " << J<<endl;
}