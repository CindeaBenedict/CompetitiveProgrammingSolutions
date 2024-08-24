#include <fstream>
using namespace std;
ifstream cin("pbinfo.in");
ofstream cout("pbinfo.out");
int main()
{
    char a[101] , b[101];
    cin.getline(a , 101);
    int n;
    cin >> n;
    bool ok=false;
    for(int k = 0 ; k < n ; ++k)
    {
        cin >> b;
        int i = 0;
        while(a[i]!='\0')
        {
            int j = 0;
            bool adev=true;
            while(b[j]!='\0')
            {
                if(a[i+j]!=b[j])
                    adev=false;
                j++;
            }
            if(adev)
                ok=true;
            i++;
        }
    }
    int i = 0;
    b[0]='v' , b[1]='i' , b[2]='r' , b[3]='u' , b[4]='s' , b[5]='\0';
    while(a[i]!='\0')
    {
        int j = 0;
        bool adev=true;
        while(b[j]!='\0')
        {
            if(a[i+j]!=b[j])
                adev=false;
            j++;
        }
        if(adev)
            ok=true;
        i++;
    }
    if(ok)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}