#include <fstream>
using namespace std;

ifstream cin("cuvmax.in");
ofstream cout("cuvmax.out");

char a[101][300];

int main()
{
    int n;
    cin >> n;
    int max=0 , indice=0;
    for(int i = 0 ; i <= n ; ++i)
    {
        cin.getline(a[i] , 300);
        int j = 0;
        int cnt=0;
        while(a[i][j]!='\0')
        {
            if(a[i][j]==' ' && a[i][j-1]!=' ' && a[i][j+1]!='\0')
                cnt++;
            j++;
        }
        if(cnt > max)
            max = cnt , indice=i;
    }
    cout << a[indice];
    return 0;
}