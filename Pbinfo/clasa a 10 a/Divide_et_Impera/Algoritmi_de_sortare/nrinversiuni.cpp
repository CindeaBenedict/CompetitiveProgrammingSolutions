#include <iostream>
#include <queue>
#include <vector>

using namespace std;
#define Inf 0x3f3f3f3f

int ar[100001];
int st[500001];
int n;

void buildTree(int si,int ss,int se){

    if(ss == se){
        st[si] = 0;
        return;
    }
    int mid = (ss + se) / 2;
    buildTree(2 * si, ss, mid);
    buildTree(2 * si + 1, mid +1 ,se);
    st[si] = st[2 * si] + st[2 * si + 1];

}
int query(int si,int ss,int se,int qs,int qe){

    if(ss > qe || se < qs)
        return 0;

    if(ss >= qs && se <= qe)
        return st[si];

    int mid = (ss + se) / 2;
    int st = query(2 * si, ss, mid, qs,qe);
    int dr = query(2 * si + 1, mid +1 ,se,qs,qe);
    return st + dr;
}
void Update(int si,int ss,int se,int val){

    if(ss == val && se == val){
        st[si] = 1;
        return;
    }
    if(val < ss || val > se)
        return;

    int mid = (ss + se) / 2;
    Update(2 * si, ss, mid, val);
    Update(2 * si + 1, mid +1 ,se, val);

    st[si] = st[2 * si] + st[2 * si + 1];
}
int main(){

    cin >> n;
    for(int i = 1 ; i <= n ; ++i)
        cin >> ar[i];

    buildTree(1,1,n);

    long long rez = 0;
    for(int i = 1 ; i <= n ; ++i){
        rez += query(1,1,n,ar[i] + 1,n);
        Update(1,1,n,ar[i]);
    }
    
    cout << rez;


    return 0;
}