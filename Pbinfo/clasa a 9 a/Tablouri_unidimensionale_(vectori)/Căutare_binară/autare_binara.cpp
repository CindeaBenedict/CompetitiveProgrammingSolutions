#include <iostream>


using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[25001];
    for(int i=1;i<=n;i++)
        cin>>a[i];

    int m,x;
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>x;
        int li=1,ls=n;
        bool check=false;
        while(li<=ls){
            int mij=(li+ls)/2;
            if(a[mij]==x){
                check=true;
                break;
            }
            else if(a[mij]<x)
                li=mij+1;
            else
                ls=mij-1;
        }
        if(check==true)
            cout <<1<<" ";
        else
            cout <<0<<" ";
    }

    return 0;
}
