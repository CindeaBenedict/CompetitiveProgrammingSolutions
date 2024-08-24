#include <iostream>
#include <cstring>
#include <iomanip>
#include <algorithm>
using namespace std;

char nume1[101][101] , prenume1[101][101];
double x , y , z;
int n , cer , cnt;
double s;

struct poz
{
    char nume[101] , prenume[101];
    double media;
}A[101];

int maimic(poz a , poz b)
{
    if(a.media > b. media) return 1;
    else if(a.media == b.media && strcmp(a.nume , b.nume) < 0) return 1;
    else if(a.media == b.media && strcmp(a.nume , b.nume) == 0 && strcmp(a.prenume , b.prenume) < 0) return 1;
    else return 0;
}

int main()
{
    cin >> n >> cer;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> nume1[i] >> prenume1[i] >> x >> y >> z;
        A[i].media = (x + y + z) /3;
        strcpy(A[i].nume , nume1[i]);
        strcpy(A[i].prenume , prenume1[i]);
        s += A[i].media;
    }
    double medgen = s / n;
    //cout << medgen << '\n';
    for(int i = 1 ; i <= n ; i++)
        if(A[i].media > medgen) cnt++;
    if(cer == 1) cout << cnt;
    else if(cer == 2)
    {
        cout << fixed << setprecision(2) << floor(medgen * 100) / 100 << '\n';
        sort(A+1 , A+n+1 , maimic);
        for(int i = 1 ; i <= n ; i++)
        {
            cout << A[i].nume << " " << A[i].prenume << " " << fixed << setprecision(2) << floor(A[i].media * 100) / 100 << '\n';
        }
    }
}