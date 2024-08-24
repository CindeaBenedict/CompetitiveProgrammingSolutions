#include <iostream>

using namespace std;

int main()
{
    int a[1001][1001], n;
    int r=1,l=1;
    int current_sum=0, max_sum=0, max_right=0, max_left=0, max_up=0,max_down=0;
    cin>>n;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
        cin>>a[i][j];
    for(int i=l;i<=r;++i)
        for(int j=1;j<=n;++j){
        sum=sum+a[i];
        if(current_sum>=max_sum)
            max_sum=current_sum;
            max_left=l;
            max_right=r;
        }
    return 0;
}
