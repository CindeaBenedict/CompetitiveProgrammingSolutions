#include<iostream>
using namespace std;

int main()
{
    int n,j;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
j=i%2;
        if(j==1)
        {
            cout<<"I hate ";
        }
        else if(j==0)
        {
            cout<<"I love ";
        }

         if(i!=n)
        {
            cout<<"that ";
        }
    }
    cout<<"it"<<endl;
    return 0;
}
