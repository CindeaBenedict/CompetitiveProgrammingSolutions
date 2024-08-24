#include <fstream>
#include <string>
#include <set>
using namespace std;

ifstream cin ("criptare1.in");
ofstream cout ("criptare1.out");

int main()
{
/// initializari principale, citiri
   string str1, str2, cv_cheie;
   unsigned n, i, k;
   cin >> str1 >> cv_cheie;
/// ordonarea caracterelor codului cheie pe baza de valorile ascii
   multiset<char> cv_cheie_ordonat;
   for (i=0; i<cv_cheie.size(); ++i)
      cv_cheie_ordonat.insert(cv_cheie.at(i));
/// impartirea mesajului criptat ca in exemplu
   n = str1.size() / cv_cheie.size();
   if (str1.size() % cv_cheie.size()) n++;

   string mesaj[cv_cheie.size()];
   for (i=0; i<cv_cheie.size(); i++)
      mesaj[i] = str1.substr(i*n, n);
   i--;
   while (mesaj[i].size() != n)
      mesaj[i] += '*';
/// codul cuvantului cheie
   int cv_cheie_coduri[cv_cheie.size()];
   k = 0;
   auto itr = cv_cheie_ordonat.begin();
   for (; itr != cv_cheie_ordonat.end(); ++itr)
   {
      cv_cheie_coduri[cv_cheie.find(*itr)] = ++k;
      cv_cheie[cv_cheie.find(*itr)] = '-';
   }
/// rezolvare
   for (i=0; i<n; i++)
      for (k=0; k<cv_cheie.size(); k++)
         if (mesaj[cv_cheie_coduri[k] - 1].at(i) == '*') cout << ' ';
         else cout << mesaj[cv_cheie_coduri[k] - 1].at(i);
   return 0;
}