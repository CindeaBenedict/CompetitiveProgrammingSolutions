/* Generarea Anagramelor unui cuvant
 * in ordine crescator lexicografica
 * Complexitate: O(n!)
 */ 

#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin("anagrame1.in");
ofstream fout("anagrame1.out");

int n;       // cardinalul multimii
int x[20];   // generam pozitii sdin sirul a[]
bool s[20];  // s[i] = true daca i a fost deja plasat in sirul x[]
string cuv;  // sirul de cuvinte  
int nrsol;

void ScrieSol();
void Anagrame(int k); // k = pozitia curenta in sirul x[]

int main()
{
//	fin.getline(cuv, 21); // char cuv[20]
//	getline(fin, cuv);    // string cuv;
	fin >> cuv;   // cuv[0], cuv[1] ...
	
	n = cuv.length();
	sort(cuv.begin(), cuv.end());
	
	Anagrame(1);
	
}

void Anagrame(int k)
{
	if (k > n)
	{
		ScrieSol();
		return;
	}
	
	for (int i = 0; i < n; ++i)
	{
		x[k] = i;
		if (!s[i])
		{
			s[i] = true;
			Anagrame(k + 1);
			s[i] = false;
		}
	}
}

void ScrieSol()
{
	nrsol++;
	for (int i = 1; i <= n; ++i)
		fout << cuv[x[i]];
	fout << '\n';	
}

