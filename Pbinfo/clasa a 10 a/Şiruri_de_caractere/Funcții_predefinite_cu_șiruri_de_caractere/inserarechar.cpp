#include <fstream>
#include <cstring>
using namespace std;

ifstream cin("inserarechar.in");
ofstream cout("inserarechar.out");

char m[255][255] , cnt = 0;

int main(){
    char cuv[20] , s[300];
    cin >> cuv;
    cin.get();
    cin.getline(s , 256);
    int i = 0;
    int j = 0;
    while(s[i]){
        if(s[i]==' ' && s[i+1]!=' ')
            cnt++ , j = 0;
        else
            m[cnt][j]=s[i] , j++;
        i++;
    }
    int ok=0;
    for(int i = 0 ; i <= cnt ; ++i)
        if(!strcmp(m[i] , cuv))
            ok++;
    if(!ok)
        cout << "NU APARE";
    else
    for(int i = 0 ; i <= cnt ; ++i)
        if(!strcmp(m[i] , cuv))
            cout << m[i] << '?' << ' ';
        else
            cout << m[i] << ' ';
    return 0;
}