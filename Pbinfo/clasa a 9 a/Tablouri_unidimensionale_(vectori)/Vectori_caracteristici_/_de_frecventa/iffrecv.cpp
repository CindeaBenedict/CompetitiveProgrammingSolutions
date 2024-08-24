#include <fstream>
using namespace std;
ifstream fin("ciffrecv.in");
ofstream fout("ciffrecv.out");
int main()
{
    int max=0,nr_ap=0,x;
  
    while(fin>>x){
        if(x==2 && x>max){
            max=x; nr_ap=0;}
        if(x==3 && x>max){
            max=x; nr_ap=0;}
        if(x==5 && x>max){
            max=x; nr_ap=0;}
        if(x==7 && x>max){
            max=x; nr_ap=0;}
        if(x==max)
            nr_ap++;
    }
    fout<<max<<" "<<nr_ap;
    return 0;
}