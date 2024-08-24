#include <fstream>
#include <cstring>


using namespace std;

char pv[ ][3] = {"aa","ae","ai","ao", "au", "ea", "ee", "ei", "eo", "eu", "ia", "ie", "ii", "io", "iu", "oa", "oe", "oi", "ou", "ua","oo", "ue", "ui", "uu", "uo" };
int c[26];
char voc[] = {'a','e','i','o','u'};
char vo[3];

ifstream fin ("perechivocale1.in");
ofstream fout ("perechivocale1.out");

int main()
{
    int n;
    char x[41];
    int vmax=0;
    while (fin >> x)
    {
        n=strlen(x);
        for (int i=0; i<n-1; i++)
        {
            if (strchr(voc, x[i]) && strchr(voc, x[i+1]))
            {
                vo[0]=x[i];
                vo[1]=x[i+1];
                vo[2]='\0';
                for (int j = 0; j<25; j++)
                {
                    if (strcmp(vo, pv[j])==0)c[j]++;

                }
            }
        }
    }

    for (int i = 1; i<=25; i++)
        if (c[i]>vmax)vmax=c[i];

    for (int i = 1; i<=25; i++)
        if (c[i]==vmax)fout << pv[i] << " ";
    return 0;
}