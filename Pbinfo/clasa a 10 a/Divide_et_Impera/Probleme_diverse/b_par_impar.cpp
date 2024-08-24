#include <iostream>
#include <algorithm>

using namespace std;

int N,M;
int i;
int nr1,nr2;
int a[100001],b[200001];

int main()
{
    cin >> N;
    for(i = 1; i <= N; i++){
        cin >> a[i];
    }
    cin >> M;
    for(i = 1; i <= M; i++){
        cin >> b[i];
    }
    for(i = 1; i <= M; i++){
        if(b[i] % 2 == 0){
            int st = 1;
            int dr = N / 2;
            while(st <= dr){
                int mij = (st + dr ) / 2;
                if(a[mij] == b[i]){
                    nr1++;
                    break;
                }
                if(a[mij] > b[i]){
                    dr = mij - 1;
                }
                else{
                    st = mij + 1;
                }
            }
        }
        else{
            int st = N / 2 + 1;
            int dr = N;
            while(st <= dr){
                int mij = (st + dr ) / 2;
                if(a[mij] == b[i]){
                    nr2++;
                    break;
                }
                if(a[mij] > b[i]){
                    dr = mij - 1;
                }
                else{
                    st = mij + 1;
                }
            }
        }
    }

    cout << nr1 << " " << nr2;
    return 0;
}

