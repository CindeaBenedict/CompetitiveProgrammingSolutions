#include <iostream>
#include <fstream>
#include <cmath>
#include <bitset>
#include <cstring>
#include <algorithm>
using namespace std;

string  nume = "date";

ifstream fin(nume + ".in");
ofstream fout(nume + ".out");

typedef unsigned long long ull;
typedef long long  ll;

char cuvinte[11][501][301];
int len[1001],lenMax = 0;
int main()
{
	int n;
	cin >> n;
		cin.get();
	char sir[1002];
	for (int i = 0; i < n; i++)
	{
		cin.getline(sir, 1000);
		char* p = strtok(sir, " ");
		while (p)
		{
			strcpy(cuvinte[i][len[i]++],p);
			p = strtok(NULL, " ");
			lenMax = max(lenMax, len[i]);
		}
	}

	for (int j = 0; j < lenMax; j++){
		for (int i = 0; i < n; i++)
			if (cuvinte[i][j][0] != '\0')
			cout << cuvinte[i][j] << ' ';
		}

}
