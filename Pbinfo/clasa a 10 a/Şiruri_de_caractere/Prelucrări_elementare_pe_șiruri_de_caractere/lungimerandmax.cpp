#include <fstream>
using namespace std;

ifstream cin("lungimerandmax.in");
ofstream cout("lungimerandmax.out");

char s[10001] , m[10001][1001];
int vec[10001];

int main()
{
    int l;
    cin >> l;
    cin.getline(s , 10);
    cin.getline(s , 10001);
    int cnt=0;
    int i = 0 , j = 0;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {

        }
        else
        {
            m[cnt][j]=s[i] , j++;
            if(s[i+1]==' ')
                vec[cnt]=j , cnt++ , j = 0;
        }
        i++;
    }
    vec[cnt]=j;
    int ln=0;
    for(int i = 0 ; i <= cnt ; ++i)
    {
        if(ln + vec[i] <= l)
            cout << m[i] << ' ' , ln+=vec[i]+1;
        else
            cout << endl << m[i] << ' ', ln = vec[i]+1;
    }
    return 0;
}