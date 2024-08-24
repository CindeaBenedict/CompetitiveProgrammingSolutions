#include <iostream>

using namespace std;

int n,a[25][25],b[25][25],m;
int maxi;

const int dx[]={0,0,-1,1};
const int dy[]={-1,1,0,0};

bool inmat(int i,int j){
    return i>=1 && i<=n && j<=m && j>=1;
}

void back(int i,int j){
    if(i==n && j==m)
        maxi = max(maxi,b[n][m]);
    else{
        for(int d=0;d<4;++d){
            int ii=i+dx[d];
            int jj=j+dy[d];
            if(inmat(ii,jj) && a[ii][jj] >= a[i][j] && b[ii][jj]==0){
               b[ii][jj]=b[i][j] + 1;
               back(ii,jj);
               b[ii][jj]=0;
            }
        }
    }
}


int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
            cin >> a[i][j];

    b[1][1]=1;
    back(1,1);
    if(maxi == 0)
       cout << "imposibil";
    else
    cout << maxi;

    return 0;
}