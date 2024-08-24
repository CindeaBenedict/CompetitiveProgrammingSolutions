#include <iostream>

using namespace std;
int cmmnr(int n){

    int a[100], aux=0;
    while(n){
        a[aux++]=n%10;
        n/=10;
    }

    for(int i=1;i<ind;i++)
        for(int j=i+1;j<=ind;j++)
            if(a[i]<a[j])
                swap(a[i],a[j]);

    for(int i=1;i<=ind;i++)
        n=n*10+a[i];

    return n;

}
int main()
{int a;
cin>>a;
    cout <<cmmnr(a) << endl;
    return 0;
}
