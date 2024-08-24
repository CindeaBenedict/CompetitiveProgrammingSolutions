#include <bits/stdc++.h>

using namespace std;

ifstream fin("vocmax.in");
ofstream fout("vocmax.out");

int main()
{
    char a[101][251];
    int n;
    fin >> n;
    int max=0 , indice=0;
    for(int i = 0 ; i <= n ; ++i)
    {
        fin.getline(a[i] , 255);
        int cnt=0;
        int j = 0;
        while(a[i][j]!='\0')
        {
            if(strchr("aeiou" , a[i][j]))
                cnt++;
            j++;
        }
        if(cnt>max)
            indice=i , max=cnt;    
    }
    int j = 0;
    while(a[indice][j]!='\0')
    {
        fout << a[indice][j];
        j++;
    }
    return 0;    
}