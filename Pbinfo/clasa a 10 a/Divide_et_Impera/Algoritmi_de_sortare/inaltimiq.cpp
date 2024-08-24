#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1000], v[1000];
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i];
        v[i]=a[i];
    }
    sort(a,a+n);
    for(int i = 0 ; i < n ; ++i)
        for(int j = 0 ; j < n ; ++j)
        {
            if(a[i]==v[j])
            cout << j+1 << " ";
        }
        cout<<endl;
    return 0;    
}