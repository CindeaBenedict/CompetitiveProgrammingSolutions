#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("caesar.in");
ofstream cout("dbftbs.out");

char s[300], cer[20];
int n;

bool LM(char ch)
{
    return ch >= 'A' && ch <= 'Z';
}

bool lm(char ch)
{
    return ch >= 'a' && ch <= 'z';
}

int main()
{
    cin.getline(s, 260);
    cin >> n;
    cin >> cer;
    n=n%26;
    if(strcmp(cer, "encrypt") == 0)
    {
        int i = 0;
        while(s[i])
        {
            if(lm(s[i]) || LM(s[i]))
            {
                if(LM(s[i]))
                {
                    int nr = s[i] + n;
                    if(nr > 'Z')
                        s[i] = nr - 'Z' + 'A' - 1;
                    else
                        s[i] = nr;
                }
                else
                {
                    int nr = s[i] + n;
                    if(nr > 'z')
                        s[i] = nr - 'z' + 'a' - 1;
                    else
                        s[i] = nr;
                }
            }
            i++;
        }
        cout << s;
    }
    else
    {
        int i = 0;
        while(s[i])
        {
            if(LM(s[i]) || lm(s[i]))
            {
                if(LM(s[i]))
                {
                    s[i] = s[i] - n;
                    if(s[i] < 'A')
                        s[i] += 'Z' - 'A' + 1;
                }
                else
                {
                    s[i] = s[i] - n;
                    if(s[i] < 'a')
                        s[i] += 'z' - 'a' + 1;
                }
            }
            i++;
        }
        cout << s;
    }
    return 0;
}