#include <iostream>

using namespace std;
bool prim(int n){
    int d=2, cnt=1;
    while(n>1){
        int p=0;
        while(n%d==0)
            n/=d, p++;
        cnt*=(p+1);
        d++;
        if(d*d>n)
            d=n;
    }
    return cnt==2;
}

bool a_prim(int n){
    int cnt=0;
    for(int d=2; d*d<=n;++d){
        if(n%d==0)
            cnt+=2;
        if(d*d==n)
            cnt--;
    }
    if(cnt==2){
        int a,b;
        for(int d=2;d*d<=n;++d)
            if(n%d==0)
                a=d, b=n/d;
        if(prim(a)&&prim(b))
            return 1;
    }
    return 0;
}
int main()
{int f;
cin>>f;
    cout << a_prim(f)<< endl;
    return 0;
}
