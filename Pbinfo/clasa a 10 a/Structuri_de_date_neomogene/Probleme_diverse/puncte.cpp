#include <iostream>
#include <cmath>
using namespace std;
struct punct{int x , y;};
double dist00(punct p)
{
    return sqrt(p.x*p.x+p.y*p.y);///distanta de la p la origine
}
int main()
{
    int n , c = 0 ;
    punct P[101];
    double dmax = 0;
    cin >> n;
    for(int i = 1 ; i <= n ; ++i)
        cin >> P[i].x >> P[i].y;
    for(int i = 1 ; i <= n ; ++i)
    {
        double d = dist00(P[i]);
        if(d > dmax) dmax = d , c = 1;
        else if(d==dmax) c++;
    }
    cout << dmax << " " << c;
}