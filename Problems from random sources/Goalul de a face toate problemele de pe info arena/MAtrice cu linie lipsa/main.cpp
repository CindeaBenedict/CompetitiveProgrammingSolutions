#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,a[100][100],k;
    cout<<"Introdu numarul de linii:"<<endl;
    cin>>n;
    cout<<"Introdu numarul de coloane:"<<endl;
    cin>>m;
    cout<<"Introdu numarul coloanei care trebuie stearsa:"<<endl;
    cin>>k;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
        cin>>a[i][j];}

    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        if(k!=i){
            cout<<a[i][j]<<" ";
            if(j==m)
                cout<<endl;
            }

    return 0;
}

