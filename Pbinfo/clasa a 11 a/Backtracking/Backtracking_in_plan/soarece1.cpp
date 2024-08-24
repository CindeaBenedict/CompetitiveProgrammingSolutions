#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;

ifstream fin("soarece1.in");
ofstream fout("soarece1.out");

const int di[] = {-1, 0, 1, 0},
          dj[] = {0, 1, 0, -1},
          N = 50;
          
char L[N][N];
int n, m; // linii/coloane
int is, js, ib, jb;
int x[N][N];
int nrsol;

void CitesteLabirint();
void Soarece(int i, int j, int k);
bool Ok(int i, int j);
void ScrieSol();

int main()
{
	CitesteLabirint();
	Soarece(is, js, 1);
	ScrieSol();
}

#define iv (i + di[d])
#define jv (j + dj[d])

void Soarece(int i, int j, int k)
{
	if (!Ok(i, j)) return;
	x[i][j] = k;
	
	if (i == ib && j == jb)
	{
		ScrieSol();
		exit(0);
	}	
	for (int d = 0; d < 4; ++d)
		Soarece(iv, jv, k + 1);

	x[i][j] = 0;  // stergem urma
}

bool Ok(int i, int j)
{
	if (i < 1 || i > n || j < 1 || j > m) // in afara labirintului
		return false;
		
	if (L[i][j] == '#')  // obstacol
		return false;
	
	if (x[i][j] != 0)   // am mai fost pe aici
		return false;
		
	return true;
}


void CitesteLabirint()
{
	fin >> n >> m;
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j)
		{
			fin >> L[i][j];
			if (L[i][j] == 'S')
				is = i, js = j;
			if (L[i][j] == 'B')
				ib = i, jb = j;
		}
}

void ScrieSol()
{
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
			fout << x[i][j] << ' ';
		fout << '\n';
	}
	
}
