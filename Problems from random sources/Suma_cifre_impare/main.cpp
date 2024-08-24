#include <iostream>
using namespace std;
int main()
{
    int n,s=0;
cout<<"Introduceti numarul n: ";

cin>>n;
while(n!=0)
	{
	    if(n%10%2!=0)
            s=s+n%10;
		n=n/10;
	}
cout<<"Suma cifrelor impare ale lui n este: "<<s;
return 0;
}
