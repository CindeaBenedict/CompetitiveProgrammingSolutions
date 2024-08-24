#include <iostream>

#include <fstream>

using namespace std;

int main()
{
    ifstream istr;
    ofstream ostr;
    
    istr.open("maxim3.in");
    ostr.open("maxim3.out");
    
    int a,b,c;
    istr >> a >> b >> c;
    if (a>b && a>c)
        ostr << a; 
    else if (b>a && b>c)
        ostr << b;
    else
        ostr<< c;
    istr.close();
    ostr.close();
    return 0;
}