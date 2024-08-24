#include <fstream>

using namespace std;

ifstream cin ("ore.in");
ofstream cout ("ore.out");

struct ora {
    int h,m,s;
}event1,event2,sumEvent;

long long nrSec1,nrSec2;

int main()
{
    cin>>event1.h>>event1.m>>event1.s;
    cin>>event2.h>>event2.m>>event2.s;
    nrSec1=event1.h*3600 + event1.m*60 + event1.s;
    nrSec2=event2.h*3600 + event2.m*60 + event2.s;
    sumEvent.s=event1.s+event2.s;
    sumEvent.m=event1.m+event2.m;
    sumEvent.h=event1.h+event2.h;
    if (event1.s + event2.s >= 60)
    {
        sumEvent.m++;
        sumEvent.s= event1.s + event2.s - 60;
    }
    if (event1.m + event2.m >= 60)
    {
        sumEvent.h++;
        if (event1.s + event2.s >= 60) sumEvent.m=1 + event1.m + event2.m - 60;
        else sumEvent.m=event1.m + event2.m - 60;
    }

    cout<<event1.h<<": "<<event1.m<<": "<<event1.s<<endl;
    cout<<event2.h<<": "<<event2.m<<": "<<event2.s<<endl;
    cout<<nrSec1<<endl;
    cout<<nrSec2<<endl;
    cout<<sumEvent.h<<": "<<sumEvent.m<<": "<<sumEvent.s<<endl;

    return 0;
}