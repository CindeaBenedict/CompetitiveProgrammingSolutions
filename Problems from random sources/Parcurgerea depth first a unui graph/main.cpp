#include <iostream>
#include<vector>
#include<fstream>///trebuie citite valorile din fisier
using namespace std;
vector<int>G[100];///declaram global vectorul
int viz[100],n,m;  ///Vectorul vizitat tine minte daca am vizitat nodul sau nu
void citire_graf(){ ///citire graf
    ifstream fin("graf.in");///declaram conexiunea la fisier
    int x,y,i;
    fin>>n>>m;///avem variabile n si m
    for(i=1;i<=m;++i){///facem m citiri si citim extremitatiile unei muchii
        fin>>x>>y;   ///practic ne ararta un nod si un vecin ca apoi sa isi dea seama
    G[x].push_back(y);///calculatorul in ce ordine sunt
///adugam la lista de vecini a lui x nodul Y
    G[y].push_back(x);///adaugam la lista de vecini a lui y nodul x
}
fin.close();///inchidem conexiunea
}
void DFS(int nod){ ///functia care parcurge graful
///ca si matricea de adiacenta
/**În teoria grafurilor și informatică, o matrice de adiacență
este o matrice pătrată folosită pentru a reprezenta un graf
finit. Elementele matricei indică dacă perechea de noduri
corespunzătoare sunt sau nu adiacente în graf.*/
    cout<<nod<<" ";viz[nod]=1; ///dupa ce nodul a fost verificat il marcam si
///vom parcurge lista de vecini a lui nod
    for(int i=0;i<G[nod].size();++i)

///daca acest nod din lista de vecini nu este vizitat il vom vizita
        if(!viz[G[nod][i]])
///apeland functia DFS
    DFS(G[nod][i]);

}

int main(){

///in functia main citim graful si parcurgem graful de la nodul 1
    citire_graf();
    DFS(1);
}