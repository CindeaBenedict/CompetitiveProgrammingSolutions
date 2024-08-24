/*1. Un om doreşte să urce o scară cu N trepte (1<N<100). El poate urca una sau două
 * trepte la un moment dat. Fiind o fire curioasă, el vrea să ştie în câte moduri poate urca această scară.
 * Programul va citi valoarea N de la tastatură şi va afişa pe ecran rezultatul cerut.
Exemplu :  */

#include <iostream>
using namespace std;
#define NMax 100
long long N,DP[NMax];
void Citire()
{
    cout<<"N="; cin>>N;
}
void Rezolvare()
{
//DP[i] - Numarul de posibilitati de a urca i trepte
    DP[0]=1;
//Este o singura posibilitate de a urca o scara cu 0 trepte
    DP[1]=1;
// O scara cu 1 treapta se poate urca intr-un singur mod
    for(int i=2;i<=N;i++)
        DP[i]=DP[i-1]+DP[i-2];
}
void Afisare()
{
//Solutia va fi DP[N]
//Numarul de posibilitati de a urca N trepte
    cout<<"Numarul de posibilitati este: "<<DP[N];
}
int main()
{
    Citire();
    Rezolvare();
    Afisare();
    return 0;
}
