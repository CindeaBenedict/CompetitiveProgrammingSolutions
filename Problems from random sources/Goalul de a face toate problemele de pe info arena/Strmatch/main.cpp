#include<fstream>
#include<vector>
#include<string.h>
///#define Nmax 2e7 ///definim valori pentru nmax si mmax ca sa ocupe mai putin spatiu
///#define Mmax 2e7
using namespace std;
ifstream fin ("strmatch.in");
ofstream fout ("strmatch.out");
const int Nmax=2e6;
const int Mmax=2e6;
int n,m; ///ii declar pe n si m global ca sa nu mai trebuiasca sa ii declar in fiecare functie + nu ocupa atat spatiu si au deja valoarea 0
char a[Nmax+2];
char b[Mmax+2];
int lps[Nmax]; ///longest palindromic subsequence

void LPS()
{
   lps[1]=0;
   int j=1;
   for (int i=2;i<=n;++i)
   {
      if (a[i]==a[j])
         lps[i]=j++;
      else
      {
         lps[i]=lps[i-1];
         j=1;
      }
   }
}
int main(){
    fin>>a>>b;///a si b sunt siruri de caractere pe care le-am declarat global
    n=strlen(b+2);
    m=strlen(a+2); ///string length de a+2 caractere
    LPS();
    vector<int> indici; ///vector cu date de tip intreg denumit indici
    int i=1;///il initializam pe i cu valoarea 1
   for (int j=1;j<=m;) ///avem un for de la j[1] pana la j[m], da nu trebuie incrementat ca se incrmenteaza pe parcursul rezolvarii
   {
      if (a[i]==b[j])
      {
         if (i==n)
         {
            indici.push_back(j-n);
            i=lps[n]+1;
            j++;
         }
         else{
            i++; j++;}
      }
      else
      {
         if (i==1)
            j++;
         else
            i=lps[i-1]+1;
      }}

    fout<<indici.size()<<"\n";
     for (int x: indici)
      fout<<i<<" "<<endl;
return 0;
}
