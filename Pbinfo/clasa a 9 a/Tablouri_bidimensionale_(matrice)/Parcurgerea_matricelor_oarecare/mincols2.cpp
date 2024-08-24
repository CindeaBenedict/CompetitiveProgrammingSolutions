#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >>n>>m;
    int a[100][100];
    int minim=10000;
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
        {
    cin>>a[i][j];
            if(a[i][j]<minim) minim=a[i][j];
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
        int s=10000;
            for(int p=0;p<n;++p)
            {
        if(a[p][j]<s)
                    s=a[p][j];
    }
        if(s==minim) cout<<minim<<" ";
        else cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
