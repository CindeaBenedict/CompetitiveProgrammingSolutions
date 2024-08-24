/**#include <fstream>
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
 sau

#include <fstream>
using namespace std;
ifstream cin("ciffrecv.in");
ofstream cout("ciffrecv.out");
int fr[10];
int main()
 {  int a;
    while (cin >> a) fr[a]++;
    if (fr[7]!=0) {
        cout << 7 << " " << fr[7];
        return 0;
    } else if (fr[5]!=0) {
        cout << 5 << " " << fr[5];
        return 0;
    } else if (fr[3]!=0) {
       cout << 3 << " " << fr[3];
        return 0;
    } else if (fr[2]) {
        cout << 2 << " " << fr[2];
        return 0;
    }
}*/
