#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main() {
  double x,y,z;
    cin>>x>>y>>z;
    cout<<fixed<<setprecision(2)<<(long long)((x+y+z)/3*100)/100.0;
    return 0;
}