#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int x[20];   // generam pozitii din sirul c[]
int n;       // nr de litere ale cuvantului
char c[20];  // cuvantul citit
char voc[] = "aeiou";
bool s[20];  
int nrsol;

bool Ok(int k);
void Anagrame(int k);  // k - poz curenta in sirul x[]
void ScrieSol();

int main() 
{ 
	cin >> c;  // c[0] c[1] ...
	
	                     //  c   c+1  c+2
    n = strlen(c);
    sort(c, c + n); // sortam crescator cuvantul
    Anagrame(1);
    
    if (nrsol == 0)
		cout << "IMPOSIBIL";
    return 0;
}

/*  'a'  'e'  'd'   'f'
 * c[0] c[1] c[2] c[3]
 * 
 *   2    3    0    1
 * x[1] x[2] x[3] x[4]
 *           k-1    k
 * 
 */ 
bool Ok(int k)
{
	if (s[x[k]]) return false;
	if (k > 1 && (strchr(voc, c[x[k]]) && strchr(voc, c[x[k - 1]])))
		return false;
		
	if (k > 1 && (!strchr(voc, c[x[k]]) && !strchr(voc, c[x[k - 1]])))
		return false;
	
	return true;
}


void Anagrame(int k)  // k - poz curenta in sirul x[]
{
	if (k > n)
	{
		ScrieSol();
		return;
	}
	
	for (int i = 0; i < n; ++i)
	{
		x[k] = i;
		if (Ok(k))
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
		cout << c[x[i]];
	cout << '\n';
}
