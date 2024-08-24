#include <iostream>
using namespace std;
//ifstream fin("chenar.in");
//ofstream fout("chenar.out");
int main()
{
    int n , m , a[50][50];
    cin >> n>>m;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++)
        cin>>a[i][j];

    }
    for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++)
        if(i%2==0)
        a[i][j]=1;

    }
        for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++)
        cout<<a[i][j]<<" ";

    }


}
