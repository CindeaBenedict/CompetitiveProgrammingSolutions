#include <iostream>
using namespace std;

int n;

struct jucarie{
    int val;
    string s;
}a[5];

int main(){
    cin >> n >> a[1].val >> a[2].val >> a[3].val;
    a[1].s = "drona";
    a[2].s = "robot";
    a[3].s = "masina";
    for(int i = 1; i <= 2; ++i)
        for(int j = i + 1; j <= 3; ++j)
            if(a[i].val < a[j].val)
                swap(a[i], a[j]);
    if(n >= a[1].val)
        cout << a[1].s;
    else if(n >= a[2].val)
        cout << a[2].s;
    else if(n >= a[3].val)
        cout << a[3].s;
    else
        cout << "nimic";
}