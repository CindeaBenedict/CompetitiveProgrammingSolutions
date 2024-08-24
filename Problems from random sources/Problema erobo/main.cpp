#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin ("bac.txt");
    int secv=0,best_secv=0,x;
    while(fin>>x){
        if(x%10==0){
            secv++;
            if(secv>best_secv) best_secv=secv;}
            else
                secv=0;

            }
    cout<<best_secv;
    return 0;
}
