#include <iostream>

using namespace std;


void afisare(int st, int dr, int v[])
{
    for(int i = st; i<=dr; i++)
    {
        cout<<v[i]<<" ";
    }
}

void permutare(int st, int dr, int v[])
{
    int aux;
    int aux2;
    for(int i = dr; i>=st; i--)
    {
        if(i == dr)
        {
            aux = v[i];
            v[i] = v[st];
        }
        else
        {
            aux2 = aux;
            aux = v[i];
            v[i] = aux2;
        }
    }

    afisare(st, dr, v);
}

void citire()
{
    int n, k;
    int v[1004];

    cin>>n>>k;

    for(int i = 1; i<=n; i++)
    {
        cin>>v[i];
    }

    for(int i = 1; i<=n; i+=(n/k))
    {
        permutare(i, i+(n/k)-1, v);
    }
}

int main()
{
    citire();

    return 0;
}