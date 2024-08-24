#include <vector>
#include <string>
#include <fstream>

using namespace std;

ifstream fin("strmatch.in");
ofstream fout("strmatch.out");

void computeLPSArray(string pat, int m, vector<int>& lps)  /**The KMP matching algorithm uses
degenerating property (pattern having same sub-patterns appearing more than once in the pattern) of
the pattern and improves the worst case complexity to O(n). The basic idea behind KMP’s algorithm is:
whenever we detect a mismatch (after some matches), we already know some of the characters in the text
of the next window. We take advantage of this information to avoid matching the
characters that we know will anyway match. Let us consider below example to understand this.**/


///Lps este o subfunctie a algoritmului kmp
{
    int len = 0;///lungimea este 0
    lps[0] = 0;///lps numara cate valori din string care trebuie sarite  ///longest proper prefix which is also suffix
    /// lps si pat sunt de aceeasi lungime
    int i = 1;///prima pozitite a patternului
    while (i < m) {
        if (pat[i] == pat[len]) { ///verificam patternul cu sirul mare, la fiecare match, incrementam lungimea
            len++;
            lps[i] = len;/// incrementam pe i si lungimea
            i++;
        }  else
        {
            if (len != 0) {
                len = lps[len - 1]; /// // length of the previous longest prefix suffix

            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMPSearch(string pat, string txt)
{
    int m = pat.size();
    int n = txt.size();

    vector<int> lps(m);
    vector<int> rez;

    computeLPSArray(pat, m, lps);

    int i = 0;
    int j = 0;
    while ((n - i) >= (m - j)) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }
/**When we see a mismatch
We know that characters pat[0..j-1] match with txt[i-j…i-1] (Note that j starts with 0 and increment it only when there is a match).
We also know (from above definition) that lps[j-1] is count of characters of pat[0…j-1] that are both proper prefix and suffix.
From above two points, we can conclude that we do not need to match these lps[j-1] characters with txt[i-j…i-1] because we know that these characters will anyway match. Let us consider above example to understand this.**/
      ///We keep matching characters txt[i] and pat[j] and keep incrementing i and j while pat[j] and txt[i] keep matching.
        if (j == m) {
            rez.push_back(i-j);
            j = lps[j - 1];
        }

        else if (i < n && pat[j] != txt[i]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
    fout<< rez.size() << endl;
    if(rez.size() > 1000)
        for(int i = 0; i < 1000; ++i) ///Time complexity O(n) n=1000
           fout << rez[i] << " ";
    else
        for(int it : rez)
           fout<< it << " ";
}



int main()
{
    string txt, pat;
    fin >> pat >> txt;
    KMPSearch(pat, txt);
    return 0;
}
