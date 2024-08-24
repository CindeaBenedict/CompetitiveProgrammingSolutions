#include <iostream>

using namespace std;

int main()
{
    /*Ascii-American standard for information intercharge
    0...255
    'A'-65     'a'-97     '0'-48
    'B'-65     'b'-98     '1'-49
    .          .          .
    .          .          .
    .          .          .
    'Z'-90     'z'-122    '9'-57   */




    int i,a[100],n,s=0;
    cin>>n;//dimensiunea efectiva
    for(i=1;i<=n;i++)
    s=s+a[i];

        cout<<s;


    return 0;
}
