#include <iostream>

using namespace std;

int n, fr[10],x;

int main()
{
	cin >> n;
    for(int i=1;i<=9;i++)
        if(fr[i]!=0){
        x=i;
        fr[i]--;
        break;}
    for(int i=0;i<=9;i++)
        for(int j=1;j<=fr[i];j++)
            x=x*10+i;
    cout<<x;


	return 0;
}
