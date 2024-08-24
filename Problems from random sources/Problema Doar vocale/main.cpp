#include <fstream>
using namespace std;

ifstream cin("doarvocale.in");
ofstream cout("doarvocale.out");

int main()
{
    char ch[300];
    int n;
    cin >> n;
    int cnt=0;
    for(int k = 0 ; k < n ; ++k)
    {
        cin >> ch;
        int i = 0;
        bool adev=true;
        while(ch[i]!='\0')
        {
            if(ch[i]!='a' && ch[i]!='e' && ch[i]!='i' && ch[i]!='o' && ch[i]!='u')
                adev=false;
            i++;
        }
        if(adev)
            cnt++;

    }
    cout << cnt;
    return 0;
}